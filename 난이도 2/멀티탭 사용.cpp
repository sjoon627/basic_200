#include <stdio.h>
int main() {
	int n,i,n1,sum=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&n1);
		sum+=n1;
	}
	
	printf("%d",sum-n+1);
	
	return 0;
}
