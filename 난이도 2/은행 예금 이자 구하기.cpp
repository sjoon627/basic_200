#include <stdio.h>
int main() {
	double m,m1,r,y;
		int i;
	
	scanf("%lf %lf %lf",&m,&r,&y);
	m1=m;
	r=r/100+1;
	
	for(i=0;i<y;i++){
		m*=r;
	}
	
	printf("%.2lf",m);
	return 0;
}

