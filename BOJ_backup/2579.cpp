#include <cstdio>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

int dp[301][3];

int a[301];
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", a + i);
	dp[1][1] = a[1];
	for (int i = 2; i <= n; i++)
	{
		dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) + a[i];
		dp[i][2] = dp[i - 1][1] + a[i];
	}
	printf("%d\n", max(dp[n][1], dp[n][2]));

	return 0;
}
