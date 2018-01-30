#include <cstdio>

int dp[15][4];
int getdp(int a, int last) {
	if (dp[a][last] != -1) return dp[a][last];
	if (a - last == 0) return dp[a][last] = 1;
	if (a < last) return dp[a][last] = 0;
	return dp[a][last] = getdp(a-last,1) + getdp(a-last,2) + getdp(a-last,3);
}
int main() {
	int t;
	int a;
	scanf("%d", &t);
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 4; j++)
			dp[i][j] = -1;
	while(t--)
	{
		scanf("%d", &a);
		printf("%d\n", getdp(a, 1) + getdp(a, 2) + getdp(a, 3));
	}
	return 0;
}