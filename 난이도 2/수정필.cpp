#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	int l,i;
	
	scanf("%s",str);
	l=strlen(str);

	for(i=0;i<l;i++){
		if('a'<=str[i] && str[i]<='z')
		printf("%c",str[i]-('a'-'A'));
		else if('A'<=str[i] && str[i]<='Z')
		printf("%c",str[i]-('A'-'a'));
		else
		printf("%c",str[i]);
	}
	return 0;
}

