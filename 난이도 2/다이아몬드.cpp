#include <stdio.h>
int main() {
	int n,i,j,m=1;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
			
			if((n+1)/2>=i) m=i;
			else if((n%2) == 0 && (n/2+1) == i){}
			else m--;
				
		for(j=0;(m+j)<=(n/2);j++){
			printf(" ");
		}
			
		for(j=1;j<=m*2-1;j++){
			printf("*");
		}
		
		printf("\n");	
	}
	return 0;
}

