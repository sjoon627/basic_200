#include <stdio.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
		for(j=1;j<=n-i;j++){
			if(i+j == n){
				if(i<=6 && j<=6){
				printf("%d %d",i,j);
				printf("\n");	
				}
			}	
		}
	}
	return 0;
}
