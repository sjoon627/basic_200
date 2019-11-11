#include <stdio.h>
#include <string.h>

int main(){
	char n[100];
	int f[2][100]={0};
	int c=0,i,j,l,k,t=0;
	
	do{
		t=0;
		
	scanf("%s",n);
	
	l=strlen(n);
	
	for(i=0;i<l;i++){
		
		
		if(n[i]=='.'){
		c=i;
		}
		
		else{
			if(n[0]=='-' && i!=0){
			n[i]=-(n[i]-'0');
			
		
			}
			
			else if(n[0]!='-')
			n[i]-='0';
		}
	}
	
		if(c>f[0][0])
			f[0][0]=c;		
			
		if(l-c-1>f[1][0]-1)
			f[1][0]=l-c-1;
			
		if(n[0]=='-'){
			f[0][0]-=1;
			t=1;
		}
			
		
		
	for(i=l-1;t<=i;i--){
		
		if(i<c){
	
				
			if(f[0][c-i]+n[i]<10)
			f[0][c-i]+=n[i];
			
			else{
				
				f[0][c-i+1]+=(f[0][c-i]+n[i])/10;
				f[0][c-i]=(f[0][c-i]+n[i])%10;
				
				if(c-i+1>f[0][0])
				f[0][0]=c-i+1;
				
				else if(f[0][c-i+1]>=10){
					k=1;
					
					while(f[0][c-i+k]>=10 && c-i+k<f[0][0]){
						f[0][c-i+k]=f[0][c-i+k]%10;
						f[0][c-i+k+1]+=1;
						k++;
					}				
				}
			}
				
		}
		
		else if(c<i){

	
			
			if(f[1][i-c]+n[i]<10)
			f[1][i-c]+=n[i];
			
			else{
				if((c-i+1)==0 ){
					f[0][1]+=(f[1][i-c]+n[i])/10;
					f[1][i-c]=(f[1][i-c]+n[i])%10;
				}
				else{
					f[1][i-c-1]+=(f[1][i-c]+n[i])/10;
					f[1][i-c]=(f[1][i-c]+n[i])%10;	
				}
				
			}		
			
		}
	}
	
		for(j=f[0][0];0<j;j--){
			printf("%d",f[0][j]);
		}
		printf(".");
		for(j=1;j<=f[1][0];j++){
			printf("%d",f[1][j]);
		}
		printf("\n");

	}while(l!=1 || n[0]!=0);
	
}
