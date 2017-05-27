#include <stdio.h>
#define LOWER(ch) ((ch)-32)
int main()
{
	int ch,f=1;
	while (~(ch=getchar()))
	{
		if (f)
		{
			putchar(LOWER(ch));
			f=0;
		}
		else
		{
			putchar(ch);
			if (ch==' '||ch=='\n') f=1;
		}
	}
	return 0;
}
