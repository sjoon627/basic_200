#include <stdio.h>

int n,ar[22],len[10005];
int arr[10005][22],cnt;

void f(int inx,int sum){
	if(sum==n){
		for(int i=0;i<inx;i++) arr[cnt][i]=ar[i];
		len[cnt++]=inx;
		return;
	}
	
	for(int i=n-1;i>=1;i--){
		if(inx==0 || ar[inx-1]>=i && sum+i<=n){
			ar[inx]=i;
			f(inx+1,sum+i);
		}
	}
}

int main(){

	scanf("%d",&n);
	f(0,0);
	printf("%d\n",cnt);
	for(int i=0;i<cnt;i++){
		printf("%d",arr[i][0]);
		
		for(int j=1;j<len[i];j++)
			printf(" %d",arr[i][j]);
		printf("\n");
	}
	return 0;    
}
