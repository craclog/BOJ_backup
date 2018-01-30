#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
using namespace std;

vector<int> adj[5001];
int h[5001];
int dp[5001];

int sol(int n) {
	int ret = 0;
	if (dp[n] != -1) return dp[n];
	if (adj[n].size() == 0) return dp[n] = 1;
	for (int i = 0; i < adj[n].size(); i++)
	{
		ret = max(ret, sol(adj[n][i]));
	}
	return dp[n] = ret + 1;
}


int main() {	
	
	int n,m;
	scanf("%d%d", &n,&m);
	fill(dp, dp + 5001, -1);
	for (int i = 1; i <= n; i++)
		scanf("%d", h + i);
	for (int j = 0; j < m; j++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if( h[a] > h[b])
			adj[b].push_back(a);
		else
			adj[a].push_back(b);
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d\n", sol(i));
	}

	return 0;
}