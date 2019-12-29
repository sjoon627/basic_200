#include <stdio.h>
int main() {
long long int sum=0;
int a,b,n,i,j,m;
	
	scanf("%d %d %d",&a,&b,&n);
	
	for(i=0;i<=b-a;i++){
		m=1;
		for(j=0;j<a+i;j++){
			m*=n;
		}
		sum+=m;
	}
	
	printf("%lld",sum);
	return 0;
}
