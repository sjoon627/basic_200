#include <stdio.h>
int main() {
	int n1,n2,sum=0,c,s;
	scanf("%d %d",&n1,&n2);
	
	for(;n1<=n2;n1++){
		c=n1;
		s=1;
		
	while(c>0){
		s*=c%10;
		c/=10;
	} 
		
		sum+=s;
			
	}
	
	printf("%d",sum);
	
	return 0;
}
