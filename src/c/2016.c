#include <stdio.h>
int main()
{
    int n,a[100];
    while (scanf("%d",&n),n)
    {
        int i,min=0x7FFFFFFF,ind=0;
        for (i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if (a[i]<min)
            {
                min=a[i];
                ind=i;
            }
        }
        int t=a[ind];
        a[ind]=a[0];
        a[0]=t;
        for (i=0;i<n;i++) if (!i) printf("%d",a[0]); else printf(" %d",a[i]);
        puts("");
    }
}
