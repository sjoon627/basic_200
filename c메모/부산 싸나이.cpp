#include <stdio.h>
#include <string.h>

#define MAXL 100000
#define MAXN 100000

int k=1;
char str[MAXL+1];
int tree[4*MAXN];
/*
10000 : 2
01000 : e
00100 : y(yee)
00010 : i(ÀÌ)
00001 : !(ÀÌ!) 
*/

void put(int i, char c);
int sum(int l, int r);

int main()
{
        int n, i, x, key, key2, a, b;

        scanf("%s", str);
        while(k < strlen(str)) k *= 2;
        for(i=0;i<k*2;i++) tree[i] = 0;
        for(i=0;i<strlen(str);i++) put(k+i, str[i]);
        scanf("%d", &n);
        while(n--){
            key = 0;
            for(i=0;i<5;i++){
                scanf("%d", &x);
                key = key*2 + x;
            }
            scanf("%d %d", &a, &b);

            if((key|sum(a+k,b+k)) > key) printf(":(\n");
            else printf(":)\n");
        }

    return 0;
}

void put(int i, char c)
{
    int x;
    if(c == '2') x = 16;
    if(c == 'e') x = 8;
    if(c == 'y') x = 4;
    if(c == 'i') x = 2;
    if(c == '!') x = 1;

    while(i){
        tree[i] |= x;
        i /= 2;
    }
}

int sum(int l, int r)
{
    int key=0;

    while(l <= r){
        if(l%2 == 1){
            key |= tree[l];
            l++;
        }
        if(r%2 == 0){
            key |= tree[r];
            r--;
        }
        l /= 2;
        r /= 2;
    }

    return key;
}
