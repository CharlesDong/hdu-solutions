#include <stdio.h>

int leap(int y)
{
	return (y%400 == 0) || (y%4 == 0 && y%100 != 0);
}

int main()
{
	const int D[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int y, m, d, i, ans;
	char line[16];
	while (gets(line))
	{
		sscanf(line, "%d/%d/%d", &y, &m, &d);
		ans = 0;
		for (i = 1; i < m; i++)
		{
			if (i != 2 || !leap(y)) ans += D[i-1];
			else ans += 29;
		}
		printf("%d\n", ans+d);
	}
}
