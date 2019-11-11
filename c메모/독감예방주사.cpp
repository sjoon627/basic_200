#include <stdio.h>

int main()
{

    
	int n,i,j,i1;
	int s[1000];
	int r[1000]={0};
	
	scanf("%d",&n);

	for(i=0;i<n;i++){
		
	scanf("%d",&s[i]);
	r[i]=i+1;
	
	if(s[i]!=0){
	for(j=i;i-s[i]<=j;j--){
		r[j+1]=r[j];
	}
	r[i-s[i]]=i+1;
}
}
	for(i1=0;i1<n;i1++){
	printf("%d ",r[i1]);
}
    return 0;
}
