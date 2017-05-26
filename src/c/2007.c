#include <stdio.h>

int main()
{
	int m, n, i;
	while (~scanf("%d%d", &m, &n))
	{
		if (m>n) { int t = n; n = m; m = t; }
		int s1 = 0, s2 = 0;
		for (i = m; i <= n; i++)
		{
			if (i%2) s2 += i*i*i;
			else s1 += i*i;
		}
		printf("%d %d\n", s1, s2);
	}
}
