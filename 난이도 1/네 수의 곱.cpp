#include <stdio.h>

int mul(int x, int y){
	int res;
	res = x*y;
	return res;
}

int main() {
int n1,n2,n3,n4;
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	printf("%d",mul(mul(n1,n2),mul(n3,n4)));
}


