#include <stdio.h>
void main(){
	int i,n,r=0;

	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	r+=try(i);
	
	printf("%d",r);
	return 0;
}

int try(int n){
	int arr[31]={0};
	
	arr[0]=0;
	arr[1]=1;
	arr[2]=1;

	
	if(arr[n]==0 && n!=0)
		return(try(n-2) + try(n-1));
	else 
		return(arr[n]);
}
