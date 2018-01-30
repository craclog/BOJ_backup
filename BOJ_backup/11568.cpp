#include <cstdio>

int a[1002];
int dp[1002] = { 0, };
int main() {
	int n;
	int ret = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < n; i++)
	{
		int max = 0;
		//int max_index = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j] && dp[j] > max)
			{
				max = dp[j];
				//max_index = j;
			}
		}
		dp[i] = max + 1;
		if (ret < dp[i])
			ret = dp[i];
	}
	printf("%d\n", ret);
	return 0;
}