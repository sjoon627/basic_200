#include<stdio.h>

int main(){
    
	int n[3][2];
	int fn[4];
	int num,i,j,j1,j2,j3,l,f=0,b=0,sum=0,c=1,b1; 
	
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		scanf("%d %d %d %d %d %d",&n[0][0],&n[1][0],&n[2][0],&n[1][1],&n[2][1],&n[0][1]);
		
		if(i==0){
		for(j=0;j<3;j++){
			if(n[j][0]==6 || n[j][1]==6){
				break;
			}
		}
		
		for(j1=0,b=0;j1<3;j1++){
			if(j!=j1){
				
				fn[b]=n[j1][0];
				fn[b+1]=n[j1][1];
		
				b+=2;
			}
		}	
		b=4;
				
		}
		

		else if(f==0){
			c++;
			
			for(j=0;j<3;j++){
			if(n[j][0]==6 || n[j][1]==6){
				break;
			}
		}
		
		for(j2=0;j2<b;j2++){
			
			
			for(j1=0;j1<3;j1++){
				
			if(j!=j1){
				if(fn[j2]==n[j1][0]){
					fn[j2]=n[j1][1];
					break;
				}
				else if(fn[j2]==n[j1][1]){
					fn[j2]=n[j1][0];
					break;
				}
				
			}
			
			if(j1==2){
				for(j3=j2;j3+1<b;j3++)
				fn[j3]=fn[j3+1];
				b--;
				j2--;				
			}

		  }

		}
	
		if(b==1){
		
		f=fn[0];
		sum+=c*6;	
		}
	
		}
		
		
		else{

		for(j=0;j<3;j++){
			if(n[j][0]==f){
				l=n[j][0];
				f=n[j][1];
				break;
			}
			
			else if(n[j][1]==f){
				l=n[j][1];
				f=n[j][0];
				break;				
			}
		}
		b=0;
		
	   	for(j=0;j<3;j++){
			for(j1=0;j1<2;j1++){
				if(b<n[j][j1] && (n[j][j1]!=f && n[j][j1]!=l))
				b=n[j][j1];
			}
		}
		
		
		sum+=b;
	
		}
		

	}

	printf("%d",sum);
}
