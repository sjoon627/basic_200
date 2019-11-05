#include <stdio.h>
#include <string.h>

int main() {
	int n,s,i,j,l=999,ln;
	int nu[100];
	
	scanf("%d %d",&n,&s);
	
	for(i=0;i<n;i++){
		scanf("%d",&nu[i]);
	}

	j=0;
	
	for(i=0;i<s;i++){
		for(j=i;j<n;j++){
			if(l > nu[j]){
				l=nu[j];
				ln=j;
			}
		}
		
		l=nu[i];
		nu[i]=nu[ln];
		nu[ln]=l;
		
	}
	
	for(i=0;i<n;i++){
		printf("%d ",nu[i]);
	}
	return 0;
}

