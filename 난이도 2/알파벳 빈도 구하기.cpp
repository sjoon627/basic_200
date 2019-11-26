#include <stdio.h>
#include <string.h>

int main() {
	char str[150];
	int al[26]={0};
	int i,l;
	
	gets(str);
	l=strlen(str);
	
	for(i=0;i<l;i++){
		if(str[i]<='z' && str[i]>='a')
			al[str[i]-'a']++;
		else if(str[i]<='Z' && str[i]>='A')
			al[str[i]-'A']++;
	}
	
	for(i=0;i<26;i++){
		printf("%c : %d\n",'a'+i,al[i]);
	}
	
	return 0;
}
