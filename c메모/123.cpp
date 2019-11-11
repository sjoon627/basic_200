#include <stdio.h>
#include <string.h>

int main(){
	int c1,i,j,s1=0,s2=0,s=1,l;
	char n[201];
	char sum[2][100]={0};
	
   n[0]=1;
	
	while(n[0]!='0' || l!=1){
	scanf("%s",n);
	l=strlen(n);
	
	
	for(i=0;i<l;i++){
		if(n[i]=='.')
		c1=i;
		
		else
		n[i]-='0';
		
		printf("%d",c1);
		
	}
	
	for(i=c1-1,j=0;0<=i;i--,j++){
	
		sum[0][j]+=n[i];
		printf("%d",sum[0][j]);
			
       if(sum[0][j]+n[i]>=10){
	   	sum[0][j]-=10;
	   	
	   	while(sum[0][j+s]+1==10){
	   		sum[0][j+s]=0;
			s+=1; 
		   }
		   sum[0][j+s]+=1;
	   }
       
       if(s1<j)
          s1=j;
	}
	
	for(i=l-1,j=0;c1<i;i--,j++){

       sum[1][j]+=n[i];
       
       if(sum[1][j]+n[i]>=10){
	   	sum[1][j]-=10;
	   	
	   	while(sum[1][j+s]+1==10){
	   		sum[1][j+s]=0;
			s+=1; 
		   }
		   sum[1][j+s]+=1;
	   }
       
         if(s2<j)
          s2=j;
	}
	
	for(i=0;i<s1;i++){
		printf("%d",sum[0][i]);
	}
	printf(".");
	
	for(i=s2;0<=i;i--){
		printf("%d",sum[1][i]);
	}
	
}
	    
	
}

