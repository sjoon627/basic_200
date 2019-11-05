#include <stdio.h>
int main() {
	int n,n1=1,i=2;
	scanf("%d",&n);
	
	while(n1 < n){
		n1+=i;
		++i;
	
	}
	
	printf("%d",i-1);
	
	return 0;
}


