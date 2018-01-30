#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
using namespace std;
int a[101][21];
int dp[101][21];
int n, k, m;
int sol(int n, int height) {
	int minn = 201;
	if (dp[n][height] != -1) return dp[n][height];
	//if (n == 0) return dp[n][height] = 0;
	if (a[n][height] != 1) return dp[n][height] = 999;
	if (n == 1)
	{
		if( height == 2 || height == 1 ) return dp[n][height] = 0;
		else return dp[n][height] = 1;
	}
	if (height != 20 ) minn = sol(n - 1, height + 1);
	if (height != 1) minn = min(minn, sol(n - 1, height - 1));
	if (height % 2 == 0) minn = min(minn, sol(n - 1, height / 2));
	minn = min(minn, sol(n - 1, height));
	if (height == 20)
	{
		for (int i = 11; i <= 18; i++)
		{
			minn = min(minn, sol(n-1,i));
		}
	}
	
	if (minn >= 201)
	{
		for (int i = 1; i < 21; i++)
		{
			minn = min(minn, sol(n - 1, i));
		}
		return dp[n][height] = minn + 1;
	}
	else
		return dp[n][height] = minn;
}

int main() {
	
	scanf("%d %d", &n, &k);
	for (int i = 0; i <= n; i++)
		fill(dp[i], dp[i] + 21, -1);
	for (int i = 1; i <= n; i++)
	{
		int m;
		scanf("%d", &m);
		for (int j = 0; j < m; j++)
		{
			int tmp;
			scanf("%d", &tmp);
			a[i][tmp] = 1;
		}
	}
	int res = 2000;
	for (int i = 1; i < 21; i++)
	{
		if( a[n][i] == 1)
			res = min(res, sol(n,i));
	}
	if (res > k) puts("-1");
	else printf("%d\n", res);
	return 0;
}