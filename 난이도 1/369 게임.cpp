#include <stdio.h>
int main() {
	int n,res=0,i;
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
 	res+=num(i);
	
	printf("%d",res);
}

int num(int n){
	int c=0;

	if(n%10!=0 && ((n%10)%3)==0){

		c=1;
	}
	
	if(n>10)
		return c+num(n/10);
	else
		return c;
		
}
