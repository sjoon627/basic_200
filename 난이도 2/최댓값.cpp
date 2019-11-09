#include <stdio.h>
int main() {
	int i,n,b=0,b1;
	int num[200];
scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
		if(b<num[i]){
			b=num[i];
			b1=i;
		}
		
	}
	
	printf("%d %d",b,b1+1);
	return 0;
}
