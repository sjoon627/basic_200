#include <stdio.h>
int main() {
	int a,b,c;
		
	scanf("%d %d",&a,&b);
	if(a<b){
		c=a;
		a=b;
		b=c;
	}
	
	while(b!=0){
		c=b;
		b=a%b;
		a=c;
	}
	
	printf("%d",a);
	return 0;
}
