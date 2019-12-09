#include <stdio.h>
int main() {
	int num[100];
	int i,n,f,l,sum=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	scanf("%d %d",&f,&l);
	
	for(i=f-1;i<l;i++){
		sum+=num[i];
	}
	
	printf("%d",sum);
	return 0;
}
