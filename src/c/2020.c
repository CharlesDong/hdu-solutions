#include <stdio.h>
#include <stdlib.h>
#define INT(p) (*(int*)(p))
#define ABS(x) ((x)>0?(x):-(x))
int cmp(const void *a, const void *b) { return ABS(INT(b)) - ABS(INT(a)); }
int main()
{
	int n,i,a[100];
	while (scanf("%d",&n),n)
	{
		for (i=0;i<n;i++) scanf("%d",&a[i]);
		qsort(a,n,4,cmp);
		for (i=0;i<n;i++) if (!i) printf("%d",a[0]); else printf(" %d",a[i]);
		puts("");
	}
}
