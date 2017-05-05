#include <stdio.h>
#include <string.h>
#include <ctype.h>
void decode(const char * a)
{
	char *p=a;
	do
		if (isalpha(*p))
			putchar((*p-'A'+21)%26+'A');
		else
			putchar(*p);
	while (*(++p));
}
int main()
{
	char a[1000];
	while (1)
	{
		gets(a);
		if (!strcmp(a,"ENDOFINPUT")) break;
		gets(a);
		decode(a);
		putchar('\n');
		gets(a);
	}
}
