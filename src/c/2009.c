#include <stdio.h>
#include <math.h>

int main()
{
	int n, m;
	while (~scanf("%d%d", &n, &m))
	{
		double x = n;
		double s = 0.0;
		while (m--)
		{
			s += x;
			x = sqrt(x);
		}
		printf("%.2lf\n", s);
	}
}
