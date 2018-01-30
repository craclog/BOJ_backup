#include <cstdio>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

//int visit[501][501];
int map[501][501];
int dir[2][4] = { { -1,0,1,0 },{ 0,1,0,-1 } };
int n, maxx = 0;
int dp[501][501];

int dfs(int r, int c) {
	int ret = 0;
	if (dp[r][c] != -1) return dp[r][c];
	for (int i = 0; i < 4; i++)
	{
		int nr = r + dir[0][i];
		int nc = c + dir[1][i];
		if (0 <= nr && nr < n && 0 <= nc && nc < n && map[nr][nc] > map[r][c])
		{
			ret = max(ret, dfs(nr, nc) + 1);
		}
	}
	return dp[r][c] = ret;
}

int main() {

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &map[i][j]);

		}
		fill(dp[i], dp[i] + n, -1);
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			maxx = max(maxx, dfs(i, j));
		}
	printf("%d\n", maxx + 1);
	return 0;
}