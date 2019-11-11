#include <stdio.h>
#include <string.h>
int main()
{
int i=0,j1,j2,n;
int str1[100]={0};
char str[100];

gets(str);
while(str[i]!='.'){
	i++;	
}

for(j1=0;j1<i;++j1){
	
	if(str[j1]=='('){
		for(j2=j1;j2<i;j2++){
			
		   if(str[j2]==')' && str1[j2]==0){
			   str1[j2]=1;
		   	
		   	 for(n=j1;n<j2;n++){
		   	 	if('A'<=str[n] && str[n]<='Z')
		   	 	str[n]-='A'-'a';
		   	 	else if('a'<=str[n] && str[n]<='z')
		   	 	str[n]-='a'-'A';
				}
			break;
		   }	
		}
	}
}6y

for(j1=0;j1<=i;j1++){
	if(str[j1]!='(' && str[j1]!=')')
	printf("%c",str[j1]);
}
    return 0;
}
