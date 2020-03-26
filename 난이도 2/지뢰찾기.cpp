#include <stdio.h>
int main() {
	char arr[100][100];
	char ans[100][100]={0};
	int i,j,m,n;
	
	scanf("%d %d",&m,&n);
	
	for(i=0;i<m;i++){
			scanf("%s",arr[i]);
			for(j=0;j<n;j++){
				ans[i][j]='0';
			}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(arr[i][j]=='*'){
				ans[i][j]='*';
				
				if(ans[i][j+1]!='*')
				ans[i][j+1]++;
				
				if(ans[i][j-1]!='*')
				ans[i][j-1]++;
				
				if(ans[i+1][j]!='*')
				ans[i+1][j]++;
				
				if(ans[i-1][j]!='*')
				ans[i-1][j]++;
				
				if(ans[i+1][j+1]!='*')
				ans[i+1][j+1]++;
				
				if(ans[i+1][j-1]!='*')
				ans[i+1][j-1]++;
				
				if(ans[i-1][j+1]!='*')
				ans[i-1][j+1]++;
				
				if(ans[i-1][j-1]!='*')
				ans[i-1][j-1]++;
			
			}
		}
	}
	
		for(i=0;i<m;i++){
			printf("%s",ans[i]);
			printf("\n"); 
	}
}
