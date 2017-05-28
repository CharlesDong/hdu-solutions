#include <stdio.h>
int main()
{
	int n,m,i;
	while (~scanf("%d%d",&n,&m))
	{
		for (i=0;i<n/m;i++)
			printf(i?" %d":"%d",m+1+2*m*i);
		if (n/m!=(double)n/m)
			printf(" %d",2*(n/m)*m+(n-n/m*m+1));
		puts("");
	}
}
