#include <cstdio>

int cnt[3] = { 0, };
int map[2200][2200];
void divcon(int y, int x, int size) {
	int tile = map[y][x];
	bool isfail = 0;
	for (int i = y; i < y + size; i++)
	{
		for (int j = x; j < x + size; j++)
		{
			if (map[i][j] != tile)
			{
				isfail = 1;
				break;
			}
		}
		if (isfail) break;
	}
	if (!isfail)
	{
		cnt[tile  + 1]++;
		return;
	}
	int newsize = size / 3;
	for (int i = y; i < y + size; i+= newsize)
	{
		for (int j = x; j < x + size; j+= newsize)
		{
			divcon(i, j, newsize);
		}
	}
	

}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &map[i][j]);
	divcon(0,0,n);
	printf("%d\n%d\n%d\n", cnt[0], cnt[1], cnt[2]);
	return 0;
}