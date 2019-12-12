#include <stdio.h>

int main() {
	int n,i,b=0,lb=0,fc=0,lc=0;
	int num[100];
	
	scanf("%d",&n);
	
	for(i=0;i<n;++i){
		scanf("%d",&num[i]);
		
		
		if(b<num[i]){
			b=num[i];
			fc++;
		}
	}

while(b!=num[i]){
		i--;
		if(lb<num[i]){
			lb=num[i];
			lc++;
		}
}
	
	printf("%d %d",fc,lc);
	return 0;
}

