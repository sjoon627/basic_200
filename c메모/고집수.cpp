#include <stdio.h>
#include <string.h>

int main()
{

freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 

int p1,p2,n,i,j,h,t,o,l=0;
int f[1000];

scanf("%d %d %d",&p1,&p2,&n);

for(;p1<=p2;p1++){
    j=p1;
    
    for(i=0;i<n+1;i++){
    h=j/100;
    t=j/10-h*10;
    o=j%10;


    if(h!=0)
    j=h*t*o;
    if(h==0 && t!=0)
    j=t*o;
    if(h==0 && t==0)
    break;
    }
    
    if(i==n && h==0 && t==0){
    f[l]=p1;
    l++;}

    h=0;
    t=0;
    o=0;
}

 printf("%d\n",l);

 for(i=0;i<l;i++){
    printf("%d\n",f[i]);
 }
    return 0;
} 
