#include <stdio.h>

int main(){
	  freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	
	int n,n1,m,i,j,sum=0;
	
	double n2,g1,g2,k;
	double lk[10000];
	int g[10000][2];
	int lg[10000];
	
	scanf("%d %d",&n ,&m);

	for(i=0;i<n;i++){
		scanf("%d %d",&g[i][0],&g[i][1]);
		g1=g[i][1];
		g2=g[i][0];
		
		lg[i]=i;//¼ø ¼­ 
		lk[i]=g1/g2;//1´ç
	}
	
	
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(lk[j]>lk[i]){

				
				k=lg[i];
				lg[i]=lg[j];
				lg[j]=k;
				
				k=lk[i];
				lk[i]=lk[j];
				lk[j]=k;	
				
			}
		}
	}
	
	i=0;
	n1=0;
	
 while(sum!=m){

 	if(sum+g[lg[i]][0]<=m){
 		sum+=g[lg[i]][0];
 		n1+=g[lg[i]][1];

	 }
	 
	 else{
	 	g1=g[lg[i]][1];
	 	g2=g[lg[i]][0];
	 	n2=g1/g2;

	 	n1+=(m-sum)*n2;
	 	sum+=m-sum;
	 	
	 }
	 
	 i++;
 }
 
 printf("%d",n1);
 
	
} 
