#include <stdio.h>

#include <string.h>

int main()

{

   freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);

    

int i,j,k,l,m1,m2;

char str[200]={0};

char arr[200][200]={0};

 

   gets(str);

   l=strlen(str);

       m2=6;

       m1=((l-1)/m2)+1;

       

 

   for(i=0;i<l;i++){

   	if(str[j+i*6]=='*'||str[j+i*6]=='.'){

   		k=1;

		m2=l/6;

   		m1=6;

   		

   		break;

	   }

   }

 

       

 

   for(i=0;i<m1;i++){

    for(j=0;j<m2;j++){

        if(j+i*m2>=l&&k!=1)

         arr[i][j]='.';

        else if(str[j+i*m2]==' ')

         arr[i][j]='*';

        else if(str[j+i*m2]=='*'||str[j+i*m2]=='.'){

        arr[i][j]=' ';	

		}

        else

         arr[i][j]=str[j+i*m2];

    }

   }

 

 

      for(i=0;i<m2;i++){

    for(j=0;j<m1;j++){

        printf("%c",arr[j][i]);

    }

   }

 

   return 0;

}
