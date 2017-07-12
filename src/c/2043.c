#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	int m;
	char s[51];
	s[50]='\0';
	scanf("%d ",&m);
	while (m--)
	{
		gets(s);
		int c1=0,c2=0,c3=0,c4=0,c=0,l=strlen(s);
		if (l<8||l>16) { puts("NO"); continue; }
		for (int i=0;i<l;i++)
			if (isupper(s[i])&&!c1) { c1=1;c++; }
			else if (islower(s[i])&&!c2) { c2=1;c++; }
			else if (isdigit(s[i])&&!c3) { c3=1;c++; }
			else if ((s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^')&&!c4) { c4=1;c++; }
		if (c>=3) puts("YES"); else puts("NO");
	}
}
