#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
typedef long long ll;

int a[1001][1001];
int order[4];
int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
int main() {
	int r, c,k;
	int sr, sc;
	scanf("%d %d", &r, &c);
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		int t1, t2;
		scanf("%d%d", &t1, &t2);
		a[t1][t2] = 1;
	}
	scanf("%d %d", &sr, &sc);
	for (int i = 0; i < 4; i++)
		scanf("%d", order + i);

	int movedcnt = 0;
	int curdir = 0;
	int nr, nc;
	while (1)
	{
		a[sr][sc] = 1;
		nr = sr + dir[order[curdir] - 1][0];
		nc = sc + dir[order[curdir] - 1][1];
		if (nr >= 0 && nr <= r - 1 && 0 <= nc
			&& nc <= c - 1 && a[nr][nc] != 1)
		{
			movedcnt = 0;
			sr = nr;
			sc = nc;
		}
		else
		{
			movedcnt++;
			curdir++;
		}
		if (curdir == 4) curdir = 0;
		if (movedcnt >= 4) break;
	}
	printf("%d %d\n", sr, sc);


	return 0;
}
