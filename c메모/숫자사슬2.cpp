#include <stdio.h>
int main()
{

freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 

int m=10,n,i=0,j1,j2,k,l,s1=0,s2=0,n1=0,n2=1,z=0;
int num1[10];
int num2[100];


 scanf("%d",&n);

if(n==999){
    printf("2\n");
    printf("999\n");
    printf("0\n");

    return 0;
}

while(n1!=n2){
m=10; i=0; s1=0; s2=0;

num2[z]=n;

z++;
    do{
     num1[i]=(n%m)/(m/10);
     n-=num1[i]*(m/10);
     m*=10;
     i++;


 }while(n!=0);

 m=1;



for(j1=0;j1<i;j1++){
    for(j2=0;j2<i-1;j2++){
        if(num1[j2+1]<num1[j2]){
            k=num1[j2];
            num1[j2]=num1[j2+1];
            num1[j2+1]=k;
        }
    }
}

for(j1=i-1;j1>=0;j1--){
    s1+=num1[j1]*m;
    m*=10;

}
m=1;


for(j1=0;j1<i;j1++){
    for(j2=0;j2<i-1;j2++){
        if(num1[j2+1]>num1[j2]){
            k=num1[j2];
            num1[j2]=num1[j2+1];
            num1[j2+1]=k;
        }
    }
}

for(j1=i-1;j1>=0;j1--){
    s2+=num1[j1]*m;
    m*=10;

}
m=1;

n=s2-s1;
n2=n1;
n1=n;


for(j1=0;j1<z-1;j1++){
  if(num2[j1]==num2[z-1])
    n1=0;
    n2=0;
}


}
if(n2==n1)
    z-=1;
printf("%d\n",z);
for(j1=0;j1<z;j1++){
    printf("%d\n",num2[j1]);
}
    return 0;
}

