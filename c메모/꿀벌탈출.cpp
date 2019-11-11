#include <stdio.h>

int main(){
	int i,f,f1,n,f2;

	scanf("%d",&n);
	f=0;
	f1=1;
	
	for(i=0;i<n-1;i++){
      f2=f+f1;
      f=f1;
      f1=f2;
	}
	printf("%d",f1);
	
	return 0;
}
