#include <stdio.h>
#define RI(n) scanf("%d",&(n))
#define PI(n) printf("%d",(n))
#define PNL putchar('\n')
int main()
{
    int n,m,t,s;
    while (~RI(m))
    {
        s=0;
        while (m--)
        {
            RI(t);
            s+=t;
        }
        PI(s);
        PNL;
    }
}
