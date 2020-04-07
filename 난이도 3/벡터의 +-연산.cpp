#include <stdio.h>
int main() {
	float a[2];
	float b[2];
	char c;

	scanf("%f %f\n",&a[0],&a[1]);
	scanf("%f %f\n",&b[0],&b[1]);
	scanf("%c",&c);
	
	if(c=='+')
		printf("%.2f %.2f",a[0]+b[0],a[1]+b[1]);
	if(c=='-')
		printf("%.2f %.2f",a[0]-b[0],a[1]-b[1]);
	return 0;
}

