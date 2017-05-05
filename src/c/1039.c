#include <stdio.h>
#include <string.h>
#define ISVOWEL(c) ((c)=='a'||(c)=='e'||(c)=='i'||(c)=='o'||(c)=='u')
#define ISCON(c) (!ISVOWEL(c))
#define NAC(s)	\
{						\
	printf("<%s> is not acceptable.\n",(s));	\
	continue;				\
}
#define AC(s)	\
	printf("<%s> is acceptable.\n",(s));
int main()
{
	char s[21];
	int i,l,ok;
	while (scanf("%s",s),strcmp(s,"end"))
	{
		ok=0;
		l=strlen(s);
		for (i=0;i<l;i++)
			if (ISVOWEL(s[i]))
			{
				ok=1;
				break;
			}
		//puts("1");
		if (!ok) NAC(s);
		int cc=0,cv=0;
		for (i=0;i<l;i++)
		{
			if (ISVOWEL(s[i]))
				cv++,cc=0;
			else
				cc++,cv=0;
			if (cc>=3||cv>=3)
			{
				ok=0;
				break;
			}
		}
		//puts("2");
		if (!ok) NAC(s);
		for (i=1;i<l;i++)
			if (s[i]==s[i-1]&&s[i]!='e'&&s[i]!='o')
			{
				ok=0;
				break;
			}
		//puts("3");
		if (!ok) NAC(s);
		AC(s);
	}
}
