#include <stdio.h>
#define ABS(x) ((x)>0?(x):-(x))
int main()
{
	double x;
	while (~scanf("%lf",&x))
		printf("%.2lf\n",ABS(x));
}
