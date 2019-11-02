#include <stdio.h>
int main() {
	int i,a,b;
	char str[1000];
	
	gets(str);
	scanf("%d %d",&a,&b);
	
	for(i=0;i<b;i++){
		printf("%c",str[a+i-1]);
	}
	return 0;
}
