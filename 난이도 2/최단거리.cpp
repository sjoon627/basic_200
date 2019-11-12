#include <stdio.h>
int main() {
	int n,i,n1,n2,n3;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&n1);
		
		if(i>0){
			if(i==1)
				n3=n1-n2;
			else if(n3>n1-n2)
				n3=n1-n2;
		}
		n2=n1;
	}
	printf("%d",n3);
	return 0;
}
