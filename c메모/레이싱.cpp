#include <stdio.h>

int main(){

   freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
	int i,n,j=0,j1=0,j2=0;
	int N[1000];
	int r1[1000]={0};
	
  	scanf("%d",&n);
  
  	for(i=0;i<n;i++){
  		scanf("%d",&N[i]);
  	}
  	
  	i=1;
    while(i<n){
		    	
    	if(i==N[j]){
    		i++;
    		j++;
		}
		
		else{
			
			if(r1[j1]==i){
			i++;
			j1++;
		}
		   else{ 
			r1[j2]=N[j];
			j++;
			j2++;   	
		   }
		   
		}
			
	}
	  
	if(i<j){
      	printf("NO");
      	return 0;
	  }

	printf("YES");
  	
} 
