#include <stdio.h>
int main() {
	int s;
	scanf("%d",&s);
	s=1000-s;
	
	printf("%d ",s/500);
	s-=(s/500)*500;
	
		printf("%d ",s/100);
	s-=(s/100)*100;
	
		printf("%d ",s/50);
	s-=(s/50)*50;
	
		printf("%d ",s/10);

	return 0;
}
