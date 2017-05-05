#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
        puts(n%4==2?"yes":"no");
}
