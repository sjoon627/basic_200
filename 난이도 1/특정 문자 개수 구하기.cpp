#include <stdio.h>
#include <string.h>
int main() {
	int count=0,i,l;
	char c,str[50];
	
	gets(str);	
	scanf("%c",&c);

	l=strlen(str);
	
	for(i=0;i<l;i++){
		if(str[i]==c)
			count++;
	}
	
	printf("%d",count);
	return 0;
}


