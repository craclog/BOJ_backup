#include <cstdio>

int dp[1001][1001] = { 0, };
int getdp(int n, int k) {
	if (dp[n][k] != 0) {
		if (dp[n][k] >= 10007) dp[n][k] = dp[n][k] % 10007;
		return dp[n][k];
	}
	if (k == 0)
		return dp[n][k] = 1;
	if (n == k)
		return dp[n][k] = 1;
	return dp[n][k] = getdp(n-1,k) + getdp(n-1,k-1);
}
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", getdp(n, k) % 10007);;
	return 0;
}