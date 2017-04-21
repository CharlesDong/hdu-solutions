// 0ms 1700k
#include <stdio.h>
#include <string.h>

#define N 1000
#define N2 2000

int main()
{
	int a[N],b[N],c[N2],t,i,j,k,g,la,lb,l;
	char sa[N],sb[N];
	scanf("%d",&t);
	for (i=0;i<t;i++)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		memset(sa,0,sizeof(sa));
		memset(sb,0,sizeof(sb));
		scanf("%s%s",sa,sb);
		la=strlen(sa);
		lb=strlen(sb);
		for (j=0;j<la;j++)
			a[N-la+j]=sa[j]-'0';
		for (j=0;j<lb;j++)
			b[N-lb+j]=sb[j]-'0';
		l=(la>lb)?la:lb+1;
		g=0;
		for (j=N-1;j>=N-l;j--)
		{
			c[j+N2-N]=a[j]+b[j]+g;
			g=c[j+N2-N]/10;
			c[j+N2-N]%=10;
		}
		printf("Case %d:\n%s + %s = ",i+1,sa,sb);
		if (c[N2-l]!=0)
			printf("%d",c[N2-l]);
		for (j=N2-l+1;j<N2;j++)
			printf("%d",c[j]);
		printf("\n");
		if (i<t-1)
			printf("\n");
	}
}
