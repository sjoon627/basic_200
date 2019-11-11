#include <stdio.h>

int main(){
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
	int fn,sn,n,c=0;
	
	scanf("%d %d",&fn,&sn);
	
	n=2;
	while(fn!=0){
		if((fn*n)/sn>=1){
			fn=(fn*n)-sn;
			sn=sn*n;
			
			if(c==1)
			printf("+");
			printf("1/%d",n);
			c=1;
		}
		++n;
	}
}
