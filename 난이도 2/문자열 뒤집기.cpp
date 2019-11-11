#include <stdio.h>
#include <string.h>
int main() {
	
	int l;
	char str[100];
 scanf("%s",str);
	
	l=strlen(str)-1;
	
	for(;l>=0;l--){
	printf("%c",str[l]);
	}
	return 0;
}
