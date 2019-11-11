#include <stdio.h>

int main(){
	
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    
	int n[8];
	int i,i1,i2,i3,j,sum,min=9999,c=0,k;

	scanf("%d %d %d %d",&n[0],&n[1],&n[2],&n[3]);

	for(i=0;i<4;i++){
		k=1;
		sum=0;
		
		for(j=3;0<=j;j--){
		sum+=n[j+c]*k;
		k*=10;	
		}
		n[4+c]=n[c];
		c++;
		
		if(min>sum)
		min=sum;
	}

	c=0;

	for(i=1;i<=9;i++){
		for(i1=i;i1<=9;i1++){
			for(i2=i;i2<=9;i2++){
				
				if(i2==i){
					for(i3=i1;i3<=9;i3++){
						++c;
						
						if(min==(i*1000+i1*100+i2*10+i3)){
						printf("%d",c);
						return 0;
						}
						
					}
				}
				
				else{
					for(i3=i+1;i3<=9;i3++){
						++c;
						
						if(min==(i*1000+i1*100+i2*10+i3)){
						printf("%d",c);
						return 0;
					}
					
					}
				}
				
		}
	}
}
printf("%d",c);
}
