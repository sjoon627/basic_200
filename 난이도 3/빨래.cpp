#include <stdio.h>
int main() {
	
	int n,i,j;
	int arr[100];
	
	int sum=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	
		j=sum/n;
		sum=0;
	
	for(i=0;i<n;i++){
		if(arr[i]-j>0)
		sum+=arr[i]-j;
	}
	
	printf("%d",sum);
	return 0;
}
