#include <stdio.h>
int main()
{
	char s[101];
	while (gets(s))
	{
		int max=0;
		for (char *p=s; *p; p++) if (*p>max) max = *p;
		for (char *p=s; *p; p++)
		{
			putchar(*p);
			if (*p==max) printf("(max)");
		}
		puts("");
	}
}
