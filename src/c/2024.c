#include <stdio.h>
#include <ctype.h>
#include <string.h>
// NOTE: NOT NEEDED
const char * const W[] = 
{
    "auto","int","double","long","char","float","short","signed","unsigned","struct","union","enum","static","switch","case","default","break","register","const","volatile","typedef","extern","return","void","continue","do","while","if","else","for","goto","sizeof"
};

int main()
{
    char s[51];
    int n;
    scanf("%d ",&n);
    while (n--)
    {
        gets(s);
        int l=strlen(s);
        if (!isalpha(s[0])&&s[0]!='_')
        {
            puts("no");
            continue;
        }
        int i;
        int flag=1;
        for (i=0;i<sizeof(W)/sizeof(W[0]);i++)
            if (strcmp(s,W[i])==0)
            {
                flag=0;
                puts("no");
                break;
            }
        if (!flag) continue;
        for (i=0;i<l;i++)
            if (!isalpha(s[i])&&!isdigit(s[i])&&s[i]!='_')
            {
                flag=0;
                puts("no");
                break;
            }
        if (!flag) continue;
        puts("yes");
    }
}
