#include <stdio.h>
int btwn(int x, int y, int n)
{
	return n >= x && n <= y;
}
int main()
{
	int x, y;
	while (scanf("%d%d", &x, &y), x || y)
		puts(btwn(x,y,40)||btwn(x,y,41)||btwn(x,y,44)||btwn(x,y,49)?"Sorry":"OK");
}
