#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char s[10000];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", s);
        int l = strlen(s);
        int k = 1;
        for (int i = 1; i < l; i++)
            if (s[i] == s[i - 1])
                k++;
            else
            {
                if (k > 1)
                    printf("%d", k);
                putchar(s[i - 1]);
                k = 1;
            }
        if (k > 1)
            printf("%d", k);
        putchar(s[l - 1]);
        putchar('\n');
    }
    return 0;
}
