#include <stdio.h>
int main() {
	
	double n;
	
	scanf("%lf",&n);
	
	if(n<100)
		printf("%.2lf",0.005 * n);
	
	else if(100<=n && n<200)
			printf("%.2lf",0.007 * n);
	
	else if(200<=n && n<300)
			printf("%.2lf",0.009 * n);
	
	else if(300<=n)
			printf("%.2lf",0.01 * n);
	
	return 0;
}
