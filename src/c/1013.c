#include <stdio.h>
#include <string.h>

int root(int x)
{
    int r=0;
    while (x)
    {
        r+=x%10;
        x/=10;
    }
    if (r<10)
        return r;
    else
        return root(r);
}

int main()
{
    char c;
    int r=0;
    while (c=getchar(),1)
    {
        if (c=='\n')
        {
            if (r==0)
                break;
            printf("%d\n",root(r));
            r=0;
        }
        else
        {
            r+=c-48;
        }
    }
}
