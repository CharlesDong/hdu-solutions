#include <stdio.h>
#define ABS(x) ((x)>0?(x):-(x))
int main()
{
	int m,n,i,j,x,y,t;
	while (~scanf("%d%d",&m,&n))
	{
		max=0;
		for (i=1;i<=m;i++)
			for (j=1;j<=n;j++)
			{
				scanf("%d",&t);
				if (ABS(t)>ABS(max))
				{
					max=t;
					x=i;y=j;
				}
			}
		printf("%d %d %d\n",x,y,max);
	}
}
