#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>
#include<functional>
using namespace std;
typedef long long ll;

int d[1001], w[1001];
int dp[1001];
int visit[1001];
pair<int, int> a[1001];
bool myord(pair<int, int> a, pair<int, int> b)
{
	if (a.first > b.first) return true;
	if (a.first == b.first)
	{
		if (a.second > b.second) return true;
		else return false;
	}
	return false;
}
int main() {
	int n;
	scanf("%d", &n);
	fill(dp, dp + 1001, -1);
	for (int i = 0; i < n; i++)
	{
		int t1, t2;
		scanf("%d %d", &t1, &t2);
		a[i].first = t1;
		a[i].second = t2;
	}
	int sum = 0;
	sort(a, a + n, myord);
	for (int i = n; i > 0; i--)
	{
		int maxx = 0, midx = -1;
		for (int j = 0; j < n; j++)
		{
			if (visit[j] != 1 && i <= a[j].first)
			{
				if (maxx < a[j].second)
				{
					maxx = a[j].second;
					midx = j;
				}
			}
		}
		sum += maxx;
		if (midx != -1) visit[midx] = 1;
	}
	printf("%d\n", sum);


	return 0;
}
