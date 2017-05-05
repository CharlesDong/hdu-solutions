#include <stdio.h>
#define RI(x) scanf("%d",&(x))
#define PI(x) printf("%d",(x))
int lp(int x)
{
    return (!(x%4)&&x%100)||!(x%400);
}
int main()
{
    int t,y,n,i;
    RI(t);
    while (t--)
    {
        RI(y);RI(n);
        int ct=0;
        for (i=y;ct<n;i++) if (lp(i)) ct++;
        PI(i-1);
        putchar('\n');
    }
}
