#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>

long long dp[1001][1001] = { 0, };

long long getdp(int i, int j) {
	if (i == 1 && j == 1)
		return 1;
	if (dp[i][j] != 0) {
		if (dp[i][j] >= 1000000007)
			dp[i][j] = dp[i][j] % 1000000007;
		return dp[i][j];
	}
	if (i == 1 ) {
		return dp[i][j] = getdp(i, j - 1);
	}
	if (j == 1) {
		return dp[i][j] = getdp(i - 1, j);
	}
	return dp[i][j] = getdp(i - 1, j) + getdp(i, j - 1) + getdp(i - 1, j - 1);
}

int main() {
	int n, m;
	long long ret = 0;
	scanf("%d %d", &n, &m);
	dp[1][1] = 1;
	ret = getdp(n, m);
	
	if (ret >= 1000000007)
		ret = ret % 1000000007;
	
	
	printf("%d", ret);
	//
	
	return 0;
}