#include<stdio.h>
#include<math.h> 

int main(){
	int a, i=2, j;
	scanf("%d",&a);

	
	while(1){
		
		if(i<=sqrt(a)){
			
				if(a%i==0){ 
					printf("False");
					break; 
			}
			
				else{
					i++;
			}
		}
		
	  else{ 
			printf("True");
			break;
		}
		
	} 
	
}

