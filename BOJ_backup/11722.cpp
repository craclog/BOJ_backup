#include <cstdio>

int a[1000];
int dp[1000];
int main() {
	int n;
	int ret = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", a + i);
	dp[0] = 1;
	for (int i = 1; i < n; i++)
	{
		int max = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[i] < a[j] && max < dp[j])
				max = dp[j];
		}
		dp[i] = max + 1;
		if (ret < dp[i])
			ret = dp[i];
	}
	printf("%d\n", ret);
	return 0;
}