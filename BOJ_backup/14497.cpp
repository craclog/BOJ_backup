#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
typedef struct {
	int r;
	int c;
}Point;

Point* queue;
int rear, front;
int visited[302][302] = { 0, };
int nPos[4][2] = { { -1,0 },{ 1,0 },{ 0,1 },{ 0,-1 } };
char** map;
int x, y;
int cnt = 0;
void bfs(int r, int c);
int main() {
	int n, m;
	int j1, j2;

	scanf("%d %d", &n,&m);
	getchar();
	map = new char*[n+3];
	queue = new Point[n*m];
	for (int i = 0; i < n+3; i++) {
		map[i] = new char[m+3];
	}
	scanf("%d %d %d %d", &j1, &j2, &x, &y);
	getchar();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%c", &map[i][j]);
		}
		getchar();
	}
	for (int i = 0; i <= n + 1; i++) {
		map[i][0] = '1';
		map[i][m + 1] = '1';
	}
	for (int i = 0; i <= m + 1; i++) {
		map[0][i] = '1';
		map[n + 1][i] = '1';
	}
	while (1) {
		visited[j1][j2] = 1;
		bfs(j1, j2);
		cnt++;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (visited[i][j] == 1) {
					for (int k = 0; k < 4; k++) {
						if ( i + nPos[k][0] == x && j + nPos[k][1] == y) {
							printf("%d\n", cnt);
							return 0;
						}
						map[i + nPos[k][0]][j + nPos[k][1]] = '0';
					}
				}
				visited[i][j] = 0;
			}
		}
		for (int i = 0; i <= n + 1; i++) {
			map[i][0] = '1';
			map[i][m + 1] = '1';
		}
		for (int i = 0; i <= m + 1; i++) {
			map[0][i] = '1';
			map[n + 1][i] = '1';
		}
		//printf("%d\n", cnt);
	}

	
	return 0;
}

void bfs(int r, int c) {
	Point tmp, ntmp;
	int i;
	tmp.r = r; tmp.c = c;
	rear = -1;
	front = -1;

	queue[++rear] = tmp;
	while (rear != front) {
		tmp = queue[++front];
		for (i = 0; i<4; i++) {
			ntmp.r = tmp.r + nPos[i][0];
			ntmp.c = tmp.c + nPos[i][1];
			if (visited[ntmp.r][ntmp.c] != 1 && map[ntmp.r][ntmp.c] == '0') {
				queue[++rear] = ntmp;
				visited[ntmp.r][ntmp.c] = 1;
			}
		}
	}
	return;
}
