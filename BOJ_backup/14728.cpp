#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;
int dp[102][10002];

int main() {
	int t;
	int n;
	scanf("%d%d", &n, &t);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	int maxx = 0;
	for (int j = 1; j <= t; j++)
		if (j >= v[0].first)
			dp[0][j] = v[0].second;
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j <= t; j++)
		{
			if (j >= v[i].first)
				dp[i][j] = max(v[i].second + dp[i - 1][j - v[i].first], dp[i - 1][j]);
			else dp[i][j] = dp[i - 1][j];
			maxx = max(maxx, dp[i][j]);
		}
	}
	printf("%d\n", maxx);
	return 0;
}