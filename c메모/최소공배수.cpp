#include <stdio.h>
int main()
{


    int n,i,j,gcd,n1;
    int nm[100];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&nm[i]);
    }

    for(i=1;i<nm[0];i++){

        if(nm[0]%i==0&&nm[1]%i==0)
        gcd=i;

    }
    n1=nm[0]*nm[1]/gcd;

    if(n>2){

     for(j=2;j<n;j++){

        for(i=1;i<n1;i++){

         if(n1%i==0&&nm[j]%i==0)
         gcd=i;

        }

        n1=n1*nm[j]/gcd;
        }

    }

    printf("%d",n1);

    return 0;
}


