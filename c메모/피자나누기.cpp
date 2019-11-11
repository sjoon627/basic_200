#include <stdio.h>
int main(){
	int T,i,j,c=0,N,sum=0,j1,j2,k,su=0;
	int n[2][8]={0};
	
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&N);
		c=0;
		
		for(j=0;j<N;j++){
			scanf("%d",&n[0][j]);			
		}
		
		
		for(j=0;j<=N-(N+1)/2;j++){
			sum=0;
			
			for(j1=0;j1<(N+1)/2;j1++){
				
				if(sum+n[0][j+j1]<50){
					sum+=n[0][j+j1];
				}
				     
				if(sum+n[0][j+j1]==50){
					su=1;
					break;
				}
                    
			}
				if(sum+n[0][j+j1]==50){
					break;
				}                 
		}
		
		

	   if(j1>j){
	   	 k=j1;
	   	 j1=j;
	   	 j=k;
	   }
	      
		if(su==1){
		for(k=j1;k<=j+j1+1;k++){
	
			for(j2=0;j2<N;j2++){
			
				if(k!=j2){
					if(n[0][k]==n[0][j2] && n[1][j2]!=1){
					    
						c++;
						n[1][k]=1;
						n[1][j2]=1;
						break;
					}
				}
			}
		}
		if(c==0)
		c=1;					
		}


		
		printf("%d",c);
	}

	return 0;
}	

