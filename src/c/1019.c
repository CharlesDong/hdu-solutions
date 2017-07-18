#include <stdio.h>

int gcd(int x, int y)
{
	if (y == 0) return x;
	return gcd(y, x % y);
}

int lcm(int x, int y)
{
	return x / gcd(x, y) * y;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int x, y;
		scanf("%d", &x);
		for (int i = 1; i < n; i++)
		{
			scanf("%d", &y);
			x = lcm(x, y);
		}
		printf("%d\n", x);
	}
}
