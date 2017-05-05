#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
	int n;
	double x,y;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%lf%lf",&x,&y);
		printf("Property %d: This property will begin eroding in year %d.\n",i,(int)((x*x+y*y)/100.0*PI)+1);
	}
	puts("END OF OUTPUT.");
}
