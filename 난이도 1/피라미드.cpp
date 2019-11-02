#include <stdio.h>
int main() {
	int n,c=0,i,j1;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j1=1;j1<n-c;j1++){
			printf(" ");
		}
		
			for(j1=0;j1<c*2+1;j1++){
			printf("*");
		}
		c++;
		printf("\n");
		
	}
	return 0;
}
