#include <stdio.h>
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        int s = 1;
        while (n-->1) s=(s+1)*2;
        printf("%d\n",s);
    }
}
