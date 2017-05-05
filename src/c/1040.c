#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define RI(v) scanf("%d",&(v))
#define PI(v) printf("%d",(v))
#define PS putchar(' ')
#define PNL putchar('\n')
#define I(p) *((int *)(p))
typedef const void * CPV;
int cmp(CPV a, CPV b)
{
    return I(a)-I(b);
}
int main()
{
    int t,n,i,a[1000];
    RI(t);
    while (t--)
    {
        RI(n);
        for (i=0;i<n;i++)
            RI(a[i]);
        qsort(a,n,4,cmp);
        for (i=0;i<n;i++)
        {
            PI(a[i]);
            if (i<n-1)
                PS;
        }
        PNL;
    }
}
