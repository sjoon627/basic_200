#include <stdio.h>

int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
	int n,j,i,m,m1;
	int nu[2][3000]={0};
scanf("%d",&n);

for(i=0;i<n;i++){
	scanf("%d",&nu[0][i]);
}

for(i=0;i<n;i++){
	nu[1][i]=1;
for(j=0;j<n;j++){
  if(i!=j && nu[0][i]>nu[0][j])
  nu[1][i]+=1;
}
}

for(i=0;i<2;i++){
	
for(j=0;j<n;j++){
printf("%d ",nu[i][j]);
}
}

    return 0;
}
