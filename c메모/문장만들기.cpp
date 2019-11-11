#include <stdio.h>
#include <string.h> 
int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
	int l,i,j,n;
	char str[2][10000]={0};
	int A[2][26]={0};
	
	scanf("%s",str[0]);

	l=strlen(str[0]);
	
	for(i=0;i<26;i++){
     A[0][i]=i;
	}
	
	for(i=0;i<l;i++){
		A[1][str[0][i]-'a']+=1;
	}
	
	for(j=1;j<26;j++){
	for(i=1;i<26;i++){
		if(A[1][i-1]<A[1][i]){
			for(j=0;j<2;j++){
			n=A[j][i-1];
			A[j][i-1]=A[j][i];
			A[j][i]=n;				
			}
		}
	}
	}
	i=0;
	
	do{
		for(j=0;j<l;j++){
			
			if(str[1][j]==0){
			printf("%c",str[0][j]);
			
			if(A[0][i]==str[0][j]-'a')
			str[1][j]=1;	
			}
		}printf("\n");
		i++;
	}while(A[1][i]!=0);

	return 0;
} 
