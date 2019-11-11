#include <stdio.h>
#include <string.h>

int main(){


char n[2][4]={0};
int i,i12=0,j,j1,k,n1,n2;
long long int fn;
int f[2]={0};

int asc[16]={48,49,50,51,52,53,54,55,56,57,65,66,67,68,69,70};
int rst[256]={0, };


scanf("%s",n[0]);
scanf("%s",n[1]);

scanf("%d",&k);

for(i=0;i<2;i++){
        j1=1;
    for(j=3;0<=j;j--){

       if('A'<=n[i][j] && n[i][j]<='Z'){
         n[i][j]-='A'-10;
        }
        else if('0'<=n[i][j] && n[i][j]<='9'){
         n[i][j]-='0';
        }

        f[i]+=n[i][j]*j1;
        j1*=16;

    }
}
fn=f[0]*f[1];

printf("%d",f[0]);



    while (fn) {
        rst[i12++] = asc[fn%k];
        fn = fn / k;
    }
    for (i12; i12 > 0; i12--) {
        printf("%c", rst[i12-1]);
    }
    printf("\n");


return 0;
}
