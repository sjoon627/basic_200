#include <stdio.h>
#include <string.h>
int main(){
 
       freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
 
    int l,l1,i,j,n;
    char num[500];
    char num1[500];
 
    int res[500]={0};
 
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
 
 
 
    for(i=0;i<l;i++){
        for(j=0;j<l1;j++){
           res[i+j]+=num[i]*num1[j];
        }
    }
 
 
    for(i=0;i<l+l1;i++){
 
    }
 
    for(i=0;i<l+l1-1;i++){
        if(res[i]>9){
          res[i+1]+=res[i]/10;
          res[i]=res[i]%10;
        }
    }
 
    for(j=l+l1-1;0<=j;j--){
      if(j==l+l1-1&&res[j]==0){
      }
    else
        printf("%d",res[j]);
    }
 
return 0;
}

