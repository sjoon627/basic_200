#include <stdio.h>
int main() {
	int n,c=0,i;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		if(i%3 == 0)
			c+=i;
	  else if(i%5 == 0)
			c+=i;
	}
	
	printf("%d",c);
	
	return 0;
}


