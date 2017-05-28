#include <stdio.h>

typedef struct
{
	int h,m,s;
} Time;
typedef Time * PT;
typedef const Time * CPT;

void input(PT pt)
{
	scanf("%d%d%d",&pt->h,&pt->m,&pt->s);
}

void add(CPT pt1, CPT pt2, PT pta)
{
	pta->s=pt1->s+pt2->s;
	pta->m=pt1->m+pt2->m;
	pta->h=pt1->h+pt2->h;
	pta->m+=pta->s/60;
	pta->s%=60;
	pta->h+=pta->m/60;
	pta->m%=60;
}

void output(CPT pt)
{
	printf("%d %d %d\n",pt->h,pt->m,pt->s);
}

int main()
{
	int n;
	Time t1,t2,t3;
	scanf("%d",&n);
	while (n--)
	{
		input(&t1);
		input(&t2);
		add(&t1,&t2,&t3);
		output(&t3);
	}
}
