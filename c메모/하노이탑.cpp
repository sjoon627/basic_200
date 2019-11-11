#include <stdio.h>
#include <stdlib.h>

void Hanoi(int n, char de, char mi, char ar);
int h = 0;

void Hano(int n, char de, char mi, char ar)
{
    if(n == 1){
          h++;}
    else
    {
        Hano(n - 1, de, ar, mi);
        h++;
        Hano(n - 1, mi, de, ar);
    }
}

void Hanoi(int n, char de, char mi, char ar)
{


    if(n == 1){

          printf("%c %c\n",de, ar);
          h++;}
    else
    {
        Hanoi(n - 1, de, ar, mi);


        printf("%c %c\n",de,ar);
        h++;
        Hanoi(n - 1, mi, de, ar);
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n=0,k=0;

    scanf("%d", &n);

    Hano(n, 'A', 'B', 'C');
    printf("%d\n",h);

    Hanoi(n, 'A', 'B', 'C');


    return 0;
}


