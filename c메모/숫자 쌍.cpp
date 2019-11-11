#include <stdio.h>

int main(){
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    
	int n,m,i,j,c=0;
	
	scanf("%d %d",&n,&m);
	for(i=2;i<n;i++){
		for(j=1;j<i;j++){
			if((i*i+j*j+m)%(i*j)==0)
			c++;
		}
	}
	
	printf("%d",c);
}
