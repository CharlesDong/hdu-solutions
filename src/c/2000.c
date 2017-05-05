#include <stdio.h>
void swp(char *a, char *b)
{
	char t=*b;
	*b=*a;
	*a=t;
}
int main()
{
	char a,b,c,t;
	while (~(a=getchar())&&~(b=getchar())&&~(c=getchar())&&~getchar())
	{
		if (a>b)
			swp(&a,&b);
		if (a>c)
			swp(&a,&c);
		if (b>c)
			swp(&b,&c);
		printf("%c %c %c\n",a,b,c);
	}
}
