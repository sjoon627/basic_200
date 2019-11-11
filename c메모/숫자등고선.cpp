#include <stdio.h>

int main(){
	int i,j,n,x,y,s;
	int i1,i2,i3;
	int num[100][100]={0};
	
	   freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	
	scanf("%d",&s);
	scanf("%d %d",&x,&y);
	
	i1=x+y;
	
	
	for(i=0;i<s;i++){
		if(i>=y){
	    ++i1;
		i2=i1;
		}
		
		else{
	    --i1;
		i2=i1;	
		}
		
		
        		
		for(j=0;j<s;j++){
			num[i][j]=i2;
			if(j>=x-1 )
			i2++;
			else
			i2--;			
		}
	}
	
		for(i=0;i<s;i++){	
		for(j=0;j<s;j++){
			printf("%2.d ",num[i][j]);
		}printf("\n");
	}

	return 0;
}
