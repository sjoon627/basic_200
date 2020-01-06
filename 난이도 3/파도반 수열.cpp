#include <stdio.h>
void main(){
	int n,r;

	scanf("%d",&n);
	r=try(n);
	
	printf("%d",r);
	return 0;
}

int try(int n){
	int arr[50]={0};
	
	arr[0]=1;
	arr[1]=1;
	arr[2]=1;

	
	if(arr[n-1]==0)
		return(try(n-3) + try(n-2));
	else 
		return(arr[n-1]);
}

