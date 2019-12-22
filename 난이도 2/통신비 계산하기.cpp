#include <stdio.h>
int main() {
	int arr[2][6]={{29900,34900,39900,49900,59900,69900},{300,1000,2000,6000,11000}}
	int m,m1,d;
	
	scanf("%d %d",&m,&d);
	
	for(i=0;i<n;++i){
		if(arr[0][i]==m)
			break;
	}
		if(arr[1][i]>=d){
		printf("%d %d %d",m,m,m);
	}
	
	else if(arr[0][i+1]>m+(d-arr[0][i])*20)
	printf("%d %d %d",m,m+(d-arr[0][i])*20,m+(d-arr[0][i])*20);
	else{
		
	}
	return 0;
}

