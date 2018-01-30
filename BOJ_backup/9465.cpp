#include <cstdio>
#include <algorithm>
#include <functional>
#include <vector>
#include <deque>
#include <queue>
#include <set>
using namespace std;
typedef long long ll;
int a[2][100001];
int dp[100001][3]; // 0 , 1, 2
int sol(int n, int c) {
	if (dp[n][c] != -1) return dp[n][c];
	if (c == 0) return dp[n][c] = max(sol(n - 1, 1), sol(n - 1, 2));
	if (c == 1) return dp[n][c] = max(sol(n - 1, 0), sol(n - 1, 2)) + a[0][n];
	if (c == 2) return dp[n][c] = max(sol(n - 1, 0), sol(n - 1, 1)) + a[1][n];
}


int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		int n;
		scanf("%d", &n);
		for (int i = 0; i < 100001; i++)
			fill(dp[i], dp[i] + 3, -1);
		for (int i = 0; i < n; i++)
			scanf("%d", &a[0][i]);
		for (int i = 0; i < n; i++)
			scanf("%d", &a[1][i]);
		dp[0][0] = 0;
		dp[0][1] = a[0][0];
		dp[0][2] = a[1][0];
		int ret = max(sol(n-1, 1), sol(n-1, 2));
		printf("%d\n", ret);
	}

	return 0;
}
