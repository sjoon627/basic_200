#include <stdio.h>
int main() {
	int n,m,i,j,c;
	scanf("%d %d",&n,&m);
	
	for(i=n;i<m;i++){
		c=0;
		for(j=1;j<i;j++){
			if(i%j==0)
				c+=j;
		}
		if(i==c)
			printf("%d ",i);
	}
	return 0;
}

