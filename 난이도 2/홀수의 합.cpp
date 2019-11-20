#include <stdio.h>
int main() {
	int n1,n2,i,sum=0;
scanf("%d %d",&n1,&n2);
	for(;n1<=n2;n1++){
		if(n1%2)
			sum+=n1;
	
	}
	
	printf("%d",sum);
	return 0;
}
