#include <stdio.h>
int main() {
	int y;
	
	scanf("%d",&y);
	
	if((y%4)==0){
		
		if((y%100)==0){
			
			if((y%400)==0){
				printf("Leap Year");
				return 0;
			}
			printf("Not Leap Year");
			return 0;
		}
		printf("Leap Year");
		return 0;
	}
	printf("Not Leap Year");
	return 0;
}
