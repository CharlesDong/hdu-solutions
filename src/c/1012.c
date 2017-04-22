// 0ms 1680k
#include <stdio.h>
int main()
{
	double e = 1.0;
	int p = 1;
	int i;
	printf("n e\n"
		"- -----------\n"
		"0 1\n"
	);
	for (i = 1; i < 10; i++)
	{
		p *= i;
		e += 1.0 / p;
		printf("%d ", i);
		if (i < 3)
			printf("%g", e);
		else
			printf("%.9lf", e);
		printf("\n");
	}
	return 0;
}
