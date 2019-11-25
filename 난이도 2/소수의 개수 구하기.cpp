#include <stdio.h>
int main() {
	int n,i,j,nc=0,n1,c;
	
 scanf("%d",&n);
	
	for(i=2;i<n;i++){
		c=0;
		n1=i;
		
		while(n1--){
			if(i%n1==0)
				c++;
			if(n1==0 && c==1)
				nc++;
		}
	}
		printf("%d",nc);
	return 0;
}
