#include <stdio.h>
#include <string.h>

int main(){
int a,b,i=1,n,j,j1,j2;
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

scanf("%d %d",&a,&b);

    while(a>=b*i){
    i++;
}
printf("%d",i-1);
n=a-b*(i-1);

    printf(".");

for(j=0;j<21;j++){
    i=1;
    n*=10;

    while(n>=b*i){
    i++;
}

if(j==18){
    j2=i-1;
}
else if(j==19){
    j1=i-1;
}
else if(j==20){

    if(i-1<5){
    printf("%d",j2);
    printf("%d",j1);
    }

    else{
    if(j1+1==10){
    printf("%d",j2+1);
    printf("0");
    }
    else{
    printf("%d",j2);
    printf("%d",j1+1);
    }
    }

}
else
printf("%d",i-1);

n=n-b*(i-1);
}

return 0;
}
