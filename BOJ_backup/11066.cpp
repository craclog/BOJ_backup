#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long ll;
ll a[501];
ll tmp[501];
ll cost[501][501];
ll sum[501][501];
int t;

ll solve(int s, int e)
{
	if (s == e) return cost[s][e] = 0;
	if (cost[s][e] != -1) return cost[s][e];
	ll ret = 9999999999999;
	for (int i = s; i < e; i++)
		ret = min(ret, sum[s][e] + solve(s, i) + solve(i + 1, e));
	return cost[s][e] = ret;
}

int main()
{
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		memset(cost, -1, sizeof(cost));
		memset(tmp, 0, sizeof(tmp));
		for (int i = 0; i < n; i++) scanf("%lld",a+i);
		tmp[0] = a[0];
		for (int i = 1; i < n; i++) tmp[i] = a[i] + tmp[i - 1];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				if (i == 0) sum[i][j] = tmp[j];
				else sum[i][j] = tmp[j] - tmp[i - 1];
			}
		printf("%lld\n", solve(0, n - 1));
	}
	return 0;
}