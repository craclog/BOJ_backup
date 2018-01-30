#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>
#include<functional>
using namespace std;
typedef long long ll;

int dir[11][2];
//가로 0, 세로 1
int a[1001][1001];
int visit[1001][1001];
int dist[1001][1001];
int n, r, c;
queue<pair<int, int>> q;

void sol()
{
	//dist[sr][sc] = 0;
	//visit[sr][sc] = 1;
	int nr, nc, sr, sc;
	while (q.size() != 0)
	{
		auto tmp = q.front();
		q.pop();
		sr = tmp.first;
		sc = tmp.second;
		for (int i = 0; i < n; i++)
		{
			nr = sr + dir[i][0];
			nc = sc + dir[i][1];
			if (0 <= nr && nr <= r - 1
				&& 0 <= nc && nc <= c - 1
				&& a[nr][nc] == 1 && visit[nr][nc] == 0)
			{
				q.push(make_pair(nr, nc));
				visit[nr][nc] = 1;
				if (dist[nr][nc] == -1) dist[nr][nc] = dist[sr][sc] + 1;
			}
		}
	}
	
}


int main() {
	scanf("%d%d", &r, &c);
	for (int i = 0; i < 1001; i++)
	{
		fill(dist[i], dist[i] + 1001, -1);
		fill(visit[i], visit[i] + 1001, 0);
	}
	for(int i=0; i<r; i++)
		for (int j = 0; j < c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int t1, t2;
		scanf("%d%d", &t1, &t2);
		dir[i][0] = t1;
		dir[i][1] = t2;
	}
	int ret = 1000000;
	for (int i = 0; i < c; i++)
	{
		if (a[0][i] == 1)
		{
			q.push(make_pair(0, i));
			visit[0][i] = 1;
			dist[0][i] = 0;
		}
	}
	sol();
	for (int i = 0; i < c; i++)
	{
		if (visit[r - 1][i] == 1)
			ret = min(ret, dist[r - 1][i]);
	}
	if (ret >= 1000000) puts("-1");
	else printf("%d\n", ret);
	return 0;
}
