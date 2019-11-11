#include <stdio.h>
 
int IsAmstrong(int num);
int main(void)
{
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    
    for (n1;n1<=n2;n1++)
    {
        if (IsAmstrong(n1))
        {
            printf("%d ", n1);
        }
    }

    return 0;
}
 
int IsAmstrong(int num)
{
    int num2 = num;
    int sum = 0;
    while (num2>0)
    {
        sum += (num2 % 10)*(num2 % 10)*(num2 % 10);
        num2 = num2 / 10;
    }
    return sum == num;
}
