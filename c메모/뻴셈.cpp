#include <stdio.h>
#include <string.h>
int main(){

	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int l,l1,i,j,n,p=0;
    char num[202]={0};
    char num1[202]={0};

    int res[200]={0};
    p=0;
        scanf("%s",num);
    scanf("%s",num1);

    l=strlen(num);//num 문자열 길이
    l1=strlen(num1);//num1 문자열 길이

    for(i=0;i<l/2;i++){
        n=num[i]-'0';
        num[i]=num[l-i-1]-'0';
        num[l-i-1]=n;
    }
        if(l%2==1)
        num[i]-='0';

        for(i=0;i<l1/2;i++){
        n=num1[i]-'0';
        num1[i]=num1[l1-i-1]-'0';
        num1[l1-i-1]=n;
    }
        if(l1%2==1)
        num1[i]-='0';


    if(l<l1){

            j=l1;
    for(i=0;i<l1;i++){
            if(num1[i]-num[i]<0){
             res[i+1]-=1;
             res[i]+=10+(num1[i]-num[i]);
            }
            else
           res[i]+=num1[i]-num[i];

                if(res[i]<0){
                res[i]+=10;
                res[i+1]=-1;
             }
    }
    }

    else if(l>l1){
            j=l;
    for(i=0;i<l;i++){

            if(num[i]-num1[i]<0){
             res[i+1]-=1;
             res[i]+=10+(num[i]-num1[i]);
            }
            else
           res[i]+=num[i]-num1[i];

            if(res[i]<0){
                res[i]+=10;
                res[i+1]=-1;
             }
    }
    }

    else if(l==l1){
        if(num[l-1]>=num1[l1-1]){
                j=l;
                    for(i=0;i<l;i++){

            if(num[i]-num1[i]<0){
             res[i+1]-=1;
             res[i]+=10+(num[i]-num1[i]);
            }
            else
           res[i]+=num[i]-num1[i];

            if(res[i]<0){
                res[i]+=10;
                res[i+1]=-1;
             }
    }
}
        else if(num[l-1]<num1[l1-1]){
                j=l1;
                p=1;
                     for(i=0;i<l1;i++){

            if(num1[i]-num[i]<0){
             res[i+1]-=1;
             res[i]+=10+(num1[i]-num[i]);
            }
            else
           res[i]+=num1[i]-num[i];

                if(res[i]<0){
                res[i]+=10;
                res[i+1]=-1;
             }
    }
}
    }

if(j!=l || p==1)
    printf("-");

    p=1;

   for(i=j-1;0<=i;i--){
        if(res[j-p]==0 && j-p!=0){
            p++;
        }
    else
    printf("%d",res[i]);
   }



return 0;
}
