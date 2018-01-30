#include <cstdio>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

int dp[1001];
int a[1001];
int adj[1001][1001];
int n, k, w;
int sol(int v) {
	int maxx = 0;
	if (dp[v] != -1) return dp[v];
	for (int i = 1; i <= n; i++)
	{
		if (adj[v][i] == 1 )
			if( maxx < sol(i)) maxx = sol(i);
	}
	return dp[v] = maxx + a[v];
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--)
	{
		fill(dp, dp + 1001, -1);
		fill(a, a + 1001, 0);
		for (int i = 0; i < 1001; i++)
			fill(adj[i], adj[i] + 1001, 0);
		scanf("%d %d", &n, &k);
		for (int i = 1; i <= n; i++)
		{
			int tmp;
			scanf("%d", &tmp);
			a[i] = tmp;
		}
		for (int i = 1; i <= k; i++)
		{
			int a, b;
			scanf("%d %d", &a, &b);
			adj[b][a] = 1;
		}
		scanf("%d", &w);
		printf("%d\n", sol(w));		
	}

	return 0;
}
