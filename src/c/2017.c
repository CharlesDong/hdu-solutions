#include <stdio.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while (n--)
    {
        int ch=getchar();
        int c=0;
        while (ch!='\n'&&ch!=-1)
        {
            if (isdigit(ch)) c++;
            ch=getchar();
        }
        printf("%d\n",c);
    }
}
