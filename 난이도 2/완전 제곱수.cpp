#include <stdio.h>
int main() {
	int i,n,j,n1,sum=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&n1);
		
		for(j=1;j*j<=n1;j++){
			if(j*j==n1)
				sum++;
		}
		
	}
	printf("%d",sum);
	return 0;
}

