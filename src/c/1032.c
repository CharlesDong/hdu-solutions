#include <stdio.h>
int main()
{
    int l,r;
    while (scanf("%d%d",&l,&r)!=-1)
    {
        int f=0;
        if (l>r)
        {
            f=1;int t=r;r=l;l=t;
        }
        int mx=0;
        for (int i=l;i<=r;i++)
        {
            int tmp=i;
            int ct=1;
            while (tmp>1)
            {
                if (tmp%2) tmp=tmp*3+1;
                else tmp/=2;
                ct++;
            }
            if (ct>mx)
                mx=ct;
        }
        if (f)
        {
            int t=r;r=l;l=t;
        }
        printf("%d %d %d\n",l,r,mx);
    }
}
