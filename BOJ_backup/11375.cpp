#include <cstdio>
#include <algorithm>
#define sink n + m + 1
#define MAX_FLOW n
using namespace std;

int queue[1001];
int front = -1, rear = -1;
int p[2002];
int n, m;
int v[2002] = { 0, };
int a[2002][2002] = { 0, };
int source = 0;
bool dfs(int s) {
	v[s] = 1;
	if (s == (sink)) return true;
	for (int i = 1; i <= sink; i++)
	{
		if (a[s][i] && !v[i])
		{
			p[i] = s;
			if (dfs(i)) return true;
		}
	}
	return false;
}
void update(int e) {
	if (e == 0) return;
	else {
		a[p[e]][e]--;
		a[e][p[e]]++;
		update(p[e]);
	}
}

int main() {
	int ans = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		a[0][i + 1] = 1;
		int tmp;
		scanf("%d", &tmp);
		for (int j = 0; j < tmp; j++)
		{
			int tmp2;
			scanf("%d", &tmp2);
			a[i + 1][n + tmp2] = 1;
			a[n + tmp2][sink] = 1;
		}
	}
	for (int i = 0; i <= MAX_FLOW; i++)
	{
		fill(v, v + n + m + 2, 0);
		int flag  = dfs(0);
		if (flag) update(sink);
		else break;
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}