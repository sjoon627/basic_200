#include  <stdio.h>
#include  <math.h>

int  main(){
double  a, b, c, d, e;
	
	
	scanf("%lf %lf %lf",&a,&b,&c);

	
if (a == 0)
printf("x = %f \n", -c / b);
	
else
{
d = b * b - 4.0*a*c;
	
	if (d > 0){
	e = sqrt(d);
	printf("%.2f, %.2f", (-b + e) / (2.0*a), (-b - e) / (2.0*a));
	}
	
	else{
		if (d == 0){
		printf("%.2f", (-b) / (2.0*a));
		}
	
		else{
		printf("X");
		}
	}
	
}
	
return  0;
}
