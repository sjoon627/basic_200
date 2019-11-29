#include <stdio.h>
int main() {
	int i=1,n;
scanf("%d",&n);
	while(n){
		++i;

			if(n%i==0){
				if((n/i)==1){
				printf("%d",i);
				n=0;
				break;
			}
			printf("%d ",i);
			n/=i;
			i=1;
		}	

	}		
	return 0;
}
