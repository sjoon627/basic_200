#include <stdio.h>
#include <string.h>

int main() {
	int i,j,l;
	char input[100];
	
	scanf("%s",input);
	l=strlen(input);
	
	for(i=0;i<l;i++){
		for(j=0;j<=i;j++){
			printf("%c",input[j]);
		}printf("\n");
	}
	
	return 0;
}
