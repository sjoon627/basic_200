#include <stdio.h>
#include <math.h>

int main() {
	double a,b,a1,b1;
	
	scanf("%lf %lf",&a,&b);
	scanf("%lf %lf",&a1,&b1);
	
	printf("%.2lf",sqrt(fabs((a-a1)*(a-a1)+(b-b1)*(b-b1))));
	return 0;
}
