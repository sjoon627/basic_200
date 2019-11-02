#include <stdio.h>
int main() {
	int n,min=999999999,i;
	int num[1000];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		if(min>num[i])
			min=num[i];
	}
	
	printf("%d",min);
	return 0;
}


