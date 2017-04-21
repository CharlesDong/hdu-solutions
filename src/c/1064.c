// 0ms 1684k
#include <stdio.h>
#include <math.h>
int main()
{
	double sum = 0.0;
	double temp;
	int i;
	for (i = 0; i < 12; i++)
	{
		scanf("%lf", &temp);
		sum += temp;
	}
	printf("$%.2lf\n", sum / 12.0);
	return 0;
}
