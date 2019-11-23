#include <stdio.h>
int main() {
	int n1,n2,i;
	scanf("%d %d",&n1,&n2);
	
	for(i=1;i<n1;i++){		
		if((i%n2)==0)
			n1++;
	}
	
	printf("%d",n1);
	return 0;
}

