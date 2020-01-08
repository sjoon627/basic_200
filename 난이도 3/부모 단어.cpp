#include <stdio.h>
#include <string.h>
int main() {
	int l,cl,i,j;
	char str[20];
	char cstr[60];
	
	scanf("%s %s",str,cstr);

	l=strlen(str);
	cl=strlen(cstr);
	
	for(i=0;i<l;i++){
		for(j=0;j<cl;j++){
			if(str[i]==cstr[j]){
				cstr[j]=1;
			}
		}
	}
	
	for(j=0;j<cl;j++){
		if(cstr[j]!=1){
			printf("NO");
			return 0;
		}
	}
	
	printf("YES");
	return 0;
}

