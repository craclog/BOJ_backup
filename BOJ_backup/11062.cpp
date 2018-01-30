#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

typedef pair<int, int> pii;
int t;
int a[1001];
pii dp[1001][1001];

pii solve(int s, int e)
{
	if (dp[s][e].first != -1) return dp[s][e];
	if (s == e) return dp[s][e] = pii(a[s], 0);

	int left = solve(s + 1, e).second + a[s];
	int cl = solve(s + 1, e).first;
	int right = solve(s, e - 1).second + a[e];
	int cr = solve(s, e - 1).first;

	if (left > right) return dp[s][e] = pii(left, cl);
	else if (left < right) return dp[s][e] = pii(right, cr);
	else
	{
		if(cl < cr) return dp[s][e] = pii(left, cl);
		else return dp[s][e] = pii(right, cr);
	}
}

int main()
{
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);

		memset(dp, -1, sizeof(dp));
		for (int i = 0; i < n; i++) scanf("%d", a + i);
		pii sol = solve(0, n - 1);
		printf("%d\n", sol.first);
	}
	return 0;
}