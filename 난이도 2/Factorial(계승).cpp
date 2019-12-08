#include <stdio.h>
int main() {
  long long int m=1;
	int i,n;
	
	scanf("%d",&n);
	
	for(i=2;i<=n;i++){
		m*=i;
	}
	
	printf("%lld",m);
	return 0;
}

