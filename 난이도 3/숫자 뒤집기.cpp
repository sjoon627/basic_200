#include <stdio.h>
int main() {
	int l;
	char str[500];
	
	scanf("%s",str);
	l=strlen(str)-1;
	
	if(str[l]=='0'){
		while(str[l]=='0')
			l--;
	}
		
	for(;l>=0;l--){
		printf("%c",str[l]);
	}
	return 0;
}
