#include <stdio.h>

int gcd(int x, int y)
{
	int r;
	while (y)
	{
		r=x%y;
		x=y;
		y=r;
	}
}

int lcm(int x, int y)
{
	return x*y/gcd(x,y);
}

int main()
{
	int x,y;
	while (~scanf("%d%d",&x,&y))
		printf("%d\n",lcm(x,y));
}
