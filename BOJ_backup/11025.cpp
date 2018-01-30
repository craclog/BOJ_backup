#include <cstdio>
int main()
{
	int n, k;
	int ret = 1;
	scanf("%d %d", &n, &k);
	for (int i = 2; i <= n; i++)
		ret = (ret + k - 1) % i + 1;
	printf("%d\n", ret);
	return 0;
}