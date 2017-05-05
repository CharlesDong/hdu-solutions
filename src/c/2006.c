#include <stdio.h>
int main()
{
	int n,t,p;
	while (~scanf("%d",&n))
	{
		p=1;
		while (n--)
		{
			scanf("%d",&t);
			if (t%2) p*=t;
		}
		printf("%d\n",p);
	}
}
