#include <stdio.h>

int ri()
{
	int n;
	scanf("%d", &n);
	return n;
}

double rd()
{
	double n;
	scanf("%lf", &n);
	return n;
}

int main()
{
	int n;
	double x;
	while (n=ri())
	{
		int pos=0, neg=0, zro=0;
		while (n--)
		{
			x=rd();
			if (x>0.0) pos++;
			else if (!x) zro++;
			else neg++;
		}
		printf("%d %d %d\n", neg, zro, pos);
	}
}
