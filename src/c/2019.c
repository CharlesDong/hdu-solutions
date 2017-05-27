#include <stdio.h>
int main()
{
	int n,m,i,x,f1,f2;
	while (scanf("%d%d",&n,&m),n||m)
	{
		f1=f2=0;
		for (i=0;i<n;i++)
		{
			scanf("%d",&x);
			if (x>=m&&!f2)
			{
				if (!f1)
				{
					printf("%d",m);
					f1=1;
				}
				else printf(" %d",m);
				f2=1;
			}
			if (!f1)
			{
				printf("%d",x);
				f1=1;
			}
			else printf(" %d",x);
		}
		if (!f2) printf(" %d",m);
		puts("");
	}
}
