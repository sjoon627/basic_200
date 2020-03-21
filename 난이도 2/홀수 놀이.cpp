#include <stdio.h>
int main() {
int n,c,i=0;
	
	scanf("%d",&n);
	
	for(c=1;c<=n;c++;)
		i+=2*c-1;
	
	printf("%d",(i*2)*3-9);
	return 0;
}
