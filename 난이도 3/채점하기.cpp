#include <stdio.h>
#include <string.h>

int main() {
	int l,i,sum=0,count=0;
	char str[100];
	
	scanf("%s",str);
	
	l=strlen(str);
	
	for(i=0;i<l;i++){
	
		if(str[i]=='o'){
			 count++;
			sum+=count;
		}
		else count=0;
	
	}
	
	printf("%d",sum);
	return 0;
}

