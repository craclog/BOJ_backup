#include <cstdio>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

int dp[101][11];

int a[301];
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 10; i++)
		dp[1][i] = 1;
	for (int i = 2; i <= n; i++)
		for (int j = 0; j < 10; j++)
		{
			if (j == 0) dp[i][0] = dp[i - 1][1] % 1000000000;
			else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		}
	int ans = 0;
	for (int i = 1; i < 10; i++)
		ans = (ans + dp[n][i]) % 1000000000;
	printf("%d\n", ans);

	return 0;
}
