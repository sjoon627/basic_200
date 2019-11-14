#include <stdio.h>
int main() {
	int i,j,n;
scanf("%d",&n);
	for(j=2;j<=9;j++){
	for(i=1;i<=9;i++){
		printf("%d * %d = %d ",j,i,j*i);
			if(i%n==0)
				printf("\n");
	}		
	}

	return 0;
}
