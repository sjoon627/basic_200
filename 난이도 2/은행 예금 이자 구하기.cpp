#include <stdio.h>
int main() {
	double m,m1,r,y;
		int i;
	
	scanf("%lf %lf %lf",&m,&r,&y);
	m1=m;
	r/=100;
	
	for(i=0;i<y;i++){
		if(i!=0)
		m+=m1;
		m*=r;
	}
	
	printf("%.2lf",m);
	return 0;
}

