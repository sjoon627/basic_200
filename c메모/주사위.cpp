#include<stdio.h>

int main(){
    	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
	int n[3][2];
	int fn[6][2]={0};
	int sum[6]={0};
	int num,i,j,j1,j2,j3,j4,l,b=0,c=1,b1; 

	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		
		scanf("%d %d %d %d %d %d",&n[0][0],&n[1][0],&n[2][0],&n[1][1],&n[2][1],&n[0][1]);
		
	for(j3=0;j3<3;j3++){
		for(j4=0;j4<2;j4++){
			
		if(i==0)
		fn[j3*2+j4][0]=n[j3][j4];
		
		for(j=0;j<3;j++){
			if(n[j][0]==fn[j3*2+j4][0]){
				fn[j3*2+j4][1]=n[j][0];
				fn[j3*2+j4][0]=n[j][1];
				break;
			}
			
			else if(n[j][1]==fn[j3*2+j4][0]){
				fn[j3*2+j4][1]=n[j][1];
				fn[j3*2+j4][0]=n[j][0];
				break;				
			}
		}		
		
		b=0;
		
	   	for(j=0;j<3;j++){
			for(j2=0;j2<2;j2++){
				if(b<n[j][j2] && (n[j][j2]!=fn[j3*2+j4][0] && n[j][j2]!=fn[j3*2+j4][1]))
				b=n[j][j2];
			}
		}
		
		
		sum[j3*2+j4]+=b;		
		}
	}		
}

b=0;

for(i=0;i<6;i++){
	if(b<sum[i])
	b=sum[i];
}

printf("%d",b);

}
