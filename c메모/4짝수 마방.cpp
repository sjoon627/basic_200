#include <stdio.h>

int main()
{
    int a[120][120]={0};
    int n,c,i,j,i1;

    scanf("%d",&n);

    if(n%4!=0){

        printf("impossible");
        return 0;
    }

    for(i=0;i<n/4;i++){
       for(j=0;j<n/4;j++){

       c=3;
       for(i1=0;i1<4;i1++){
           a[i1+i*4][i1+j*4]=1;
           a[i1+i*4][c+j*4]=1;
           c--;
    }
    }
    }

    c=n*n;
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           if(a[i][j]==1)
            a[i][j]=j+1+i*n;
           else
            a[i][j]=c;

           c--;
    }
    }

    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
            printf("%3d ",a[i][j]);
    }printf("\n");
    }



    return 0;
}
