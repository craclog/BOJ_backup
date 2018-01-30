#include<stdio.h>
#define MAX 1000001

int dp[MAX];
int make_one(int N)
{
	int i;
	dp[0] = 0;
	dp[1] = 0;

	for (i = 2; i <= N; i++)
	{
		dp[i] = dp[i - 1] + 1;

		if (i % 3 == 0 && dp[i] > dp[i / 3] + 1)
		{
			dp[i] = dp[i / 3] + 1;
		}

		if (i % 2 == 0 && dp[i] > dp[i / 2] + 1)
		{
			dp[i] = dp[i / 2] + 1;
		}
	}
	return dp[N];
}

int main()
{
	int N;
	int result;
	scanf("%d", &N);
	result = make_one(N);
	printf("%d\n", result);

	return 0;
}



