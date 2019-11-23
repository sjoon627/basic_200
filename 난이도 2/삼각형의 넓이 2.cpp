#include <stdio.h>
#include <math.h>

int main(){
	
	float s,n1,n2,n3;
	scanf("%f %f %f",&n1,&n2,&n3);
	s=(n1+n2+n3)/2;
	printf("%.2f",sqrt(s*(s-n1)*(s-n2)*(s-n3)));
} 
