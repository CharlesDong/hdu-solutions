// 0ms
#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
		printf("%lld\n\n", (long long)(n + 1) * (long long)n / 2);
	return 0;
}
