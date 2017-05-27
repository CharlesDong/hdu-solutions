#include <stdio.h>
int main()
{
    int i,n,da,xiao,a[100];
    double s;
    while (~scanf("%d",&n))
    {
        da=0;xiao=100;s=0.0;
        for (i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if (a[i]>da) da=a[i];
            if (a[i]<xiao) xiao=a[i];
            s+=a[i];
        }
        printf("%.2lf\n",(s-da-xiao)/(n-2));
    }
}
