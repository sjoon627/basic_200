#include <stdio.h>
int main() {
	long int m,n;
	
	for(m=1;;m++){
		for(n=499;;n--){
			
			if(2*m*(m+n)==1000){
				if(n<m){
					printf("%d",((m*m)+(n*n))*((m*m)-(n*n))*2*m*n);
					
					return 0;
				}
			}
			else if(2*m*(m+n)<1000)
			break;
			
		}
	}
	
	return 0;
}
