#include <stdio.h>
int main() {
	long int n,i,c=0;
	double sum=0;
	int nu[1000];
	
	scanf("%ld",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&nu[i]);
		sum+=nu[i];
	}
	
	sum/=n;
	
	for(i=0;i<n;i++){
		if(sum<nu[i])
			c++;
	}
	
	printf("%.1lf %ld\n",sum,c);
	return 0;
}
