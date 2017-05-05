#include <stdio.h>
int main()
{
	int x;
	while (~scanf("%d",&x))
		if (x>100||x<0) puts("Score is error!");
		else if (x>=90) puts("A");
		else if (x>=80) puts("B");
		else if (x>=70) puts("C");
		else if (x>=60) puts("D");
		else puts("E");
}
