#include <stdio.h>
int main() {
	double a,b,c;
	int a1;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	 
	printf("%.2lf ",(a+b+c)/3);
	
	if((a+b+c)/3 < 60)
		printf("F");
	else if(60 <= (a+b+c)/3 && (a+b+c)/3  < 70)
		printf("D");
	else if(70 <= (a+b+c)/3 && (a+b+c)/3  < 80)
		printf("C");
	else if(80 <= (a+b+c)/3 && (a+b+c)/3  < 90)
		printf("B");
	else if(90 <= (a+b+c)/3)
		printf("A");
	
	return 0;
}


