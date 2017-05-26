#include <stdio.h>
int main()
{
	int n, m;
	scanf("%d", &m);
	while (m--)
	{
		scanf("%d", &n);
		double s = 0.0;
		for (int i = 1; i <= n; i++) s += 1.0 / i * (i % 2 != 0 ? 1 : -1);
		printf("%.2lf\n", s);
	}
}
