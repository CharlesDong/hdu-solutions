#include <stdio.h>
int cube(int a)
{
	return a*a*a;
}
int f(int a)
{
	int x=0;
	x+=cube(a%10);
	a/=10;
	x+=cube(a%10);
	a/=10;
	x+=cube(a%10);
	a/=10;
	return x;
}
int main()
{
	int a,b,i,k;
	while (~scanf("%d%d",&a,&b))
	{
		k=1;
		for (i=a;i<=b;i++)
			if (i==f(i))
			{
				if (k)
				{
					printf("%d",i);
					k=0;
				}
				else
					printf(" %d",i);
			}
		if (k) puts("no");
		else putchar('\n');
	}
}
