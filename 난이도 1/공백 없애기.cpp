#include <stdio.h>
#include <string.h>

int main() {
	char input[100]={0};
	int l,i;
	
	gets(input);
	
	for(i=0;((input[i]!=0)||(input[i+1]!=0));i++){
		if(input[i]!=' ')
			printf("%c",input[i]);
	}


	return 0;
}
