#include <stdio.h>

int main(){
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
	int nu[500][2];
	int s[500]; 
	int i,n,j,k,b=0,c=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d %d",&nu[i][0],&nu[i][1]);
		s[i]=i;
	}
	
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(nu[s[i]][1]>nu[s[j]][1]){
				k=s[i];
				s[i]=s[j];
				s[j]=k;
			}
		}
	}
	for(i=0;i<n;i++){
		if(b<=nu[s[i]][0]){
		b=nu[s[i]][1];
		++c;	
		}
		
	}

printf("%d",c);
}
