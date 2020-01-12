#include <stdio.h>
void main() {
	int n,c,i=1;
	
  scanf("%d",&n);
	
	for(c=0;c<n;){
		if(compare(i)){
			c++;
		}
		
		i++;
	}
	
	printf("%d",i-1);
}

int compare(int n){

	int com[10]={0};
	int j;
	
	while((n/10)>0){
	com[n%10]++;
	n/=10;
	}
	
	com[n]++;
	
	for(j=0;j<10;j++){
		if(com[j]>1)
			return 0;
	}

	return 1;
}
