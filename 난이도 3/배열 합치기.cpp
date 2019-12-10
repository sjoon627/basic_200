#include <stdio.h>
int main() {
	int n[2],arr[2][100],i,j;
	int f=0,l=0;	
	
	scanf("%d %d",&n[0],&n[1]);
	
	for(j=0;j<2;j++){
	for(i=0;i<n[j];i++){
		scanf("%d",&arr[j][i]);
	}		
	}
	
	while(f+l != n[0]+n[1]){
	
		if(arr[0][f] >= arr[1][l] || f>=n[0]){
			if(l>=n[1])
			break;
			
			printf("%d ",arr[1][l]);
			l++;
		}
		else if(arr[1][l] > arr[0][f] || l>=n[1]){
			if(f>=n[0])
			break;
					
			printf("%d ",arr[0][f]);
			f++;
		}
	}

	if(l<n[1]){
		for(i=l;i<n[1];i++)
		printf("%d ",arr[1][i]);
	}
	else if(f<n[0]){
		for(i=f;i<n[0];i++)
		printf("%d ",arr[0][i]);
	}
	
	return 0;
}

