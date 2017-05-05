#include <stdio.h>
int read()
{
    int n;
    scanf("%d",&n);
    return n;
}
int main()
{
    int n,t,s;
    while (n=read())
    {
        s=0;
        while (n--)
        {
            t=read();
            s+=t;
        }
        printf("%d\n",s);
    }
}
