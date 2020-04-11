#include <stdio.h>
#include <string.h>

int main() {
	int i,l;
	char str[110];
	
	gets(str);
	l=strlen(str)-1;
	
	for(i=0;i<=l/2;i++){
		printf("%c",str[i]);
		if(i!=l-i)
		printf("%c",str[l-i]);
	}
}
