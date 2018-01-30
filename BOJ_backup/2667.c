#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y) { int tmp = y; (y) = (x); (x) = tmp; }
int map[27][27] = { 0, };
int visited[27][27] = { 0, };
int n;
int npos[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
int counted[27];
int cnt = 0;

void dfs(int r, int c) {
	int i,j;
	int nr, nc;
	visited[r][c] = 1;
	cnt++;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < 4; j++) {
			nr = r + npos[j][0];
			nc = c + npos[j][1];
			if (visited[nr][nc] != 1 && map[nr][nc] == 1) {
				dfs(nr, nc);
			}
		}
		
	}
}
int main() {
	int i,j;
	int tail = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	for (i = 0; i <= n + 1; i++) {
		map[i][0] = 0;
		map[i][n+1] = 0;
		map[0][i] = 0;
		map[n+1][i] = 0;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (map[i][j] == 1 && visited[i][j] == 0) {
				cnt = 0;
				dfs(i,j);
				counted[tail++] = cnt;
			}
		}
	}
	for (i = 0; i < tail - 1; i++) {
		for (j = i + 1; j < tail; j++) {
			if (counted[i] > counted[j])
				SWAP(counted[i], counted[j]);
		}
	}
	printf("%d\n", tail);
	for (i = 0; i < tail; i++) {
		printf("%d\n", counted[i]);
	}
	return 0;
}