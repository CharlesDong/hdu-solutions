#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char c[1000][16];
    int t[1000];

    while (scanf("%d", &n), n != 0)
    {
        int i, j;
        for (i = 0; i < n; i++)
            scanf("%s", c[i]);
        for (i = 0; i < n; i++)
            t[i] = 0;
        int mx = 0;
        int best;
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
                if (strcmp(c[i], c[j]) == 0)
                    t[i]++;
            if (t[i] > mx)
            {
                mx = t[i];
                best = i;
            }
        }
        printf("%s\n", c[best]);
    }

    return 0;
}
