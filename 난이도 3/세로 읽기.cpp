#include <stdio.h>
int main() {
	int n,i,j;
	int arr[20][20]={0};

 	scanf("%d",&n);
	getchar();

	for(i=0 ; i<n ; ++i){
		for(j=0 ; j<n ; ++j){
			scanf("%c",&arr[i][j]);

			printf("%c\n",arr[i][j]);
			printf("%d %d\n",i,j);
		}
	}
	
	return 0;
}
