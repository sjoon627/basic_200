#include <stdio.h>
int main() {
	int n1,n2;
	float n3,n4;
	char c;

	scanf("%d %c %d",&n1,&c,&n2);
	
	if(c=='*')
		printf("%d",n1*n2);
	else if(c=='-')
		printf("%d",n1-n2);
	else if(c=='+')
		printf("%d",n1+n2);
	else if(c=='/'){
		n3=n1;
		n4=n2;
		printf("%.2lf",n3/n4);	
	}

	return 0;
}
