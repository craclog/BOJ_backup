//BFS
//안전영역
/*
5
6 8 2 6 2
3 2 3 4 6
6 7 3 3 2
7 2 5 3 6
8 9 5 2 7
*/

#include <stdio.h>

typedef struct {
	int r;
	int c;
}Point;
int map[102][102] = { 0, };
int visited[102][102] = { 0, };
int nPos[4][2] = { {-1,0},{1,0},{0,1},{0,-1} };
Point queue[100000];
int front, rear;
int depth = 0;

int bfs(int, int);

int main() {
	int n;
	int safe[101] = { 0, };
	int i, j,k,m;
	int max = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	for (depth = 0; depth <= 100; depth++){
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				safe[depth] += bfs(i, j);

			}
		}
		if (max < safe[depth])
			max = safe[depth];
		//printf("%d\n", safe[depth]);
		for (k = 1; k <= n; k++) {
			for (m = 1; m <= n; m++) {
				visited[k][m] = 0;
			}
		}
	}
	printf("%d\n", max);


	return 0;
}

int bfs(int r, int c) {
	Point tmp,ntmp;
	int i;
	int flag = 0;
	front = rear = -1;
	// 물에 잠기면 return 0;
	if (map[r][c] <= depth || visited[r][c] == 1) {
		return 0;
	}
	visited[r][c] = 1;
	tmp.r = r;
	tmp.c = c;
	queue[++rear] = tmp;
	while (front != rear) {
		tmp = queue[++front];
		for (i = 0; i < 4; i++) {
			ntmp.r = tmp.r + nPos[i][0];
			ntmp.c = tmp.c + nPos[i][1];
			if (map[ntmp.r][ntmp.c] > depth 
				&& visited[ntmp.r][ntmp.c] != 1) {

				queue[++rear] = ntmp;
				visited[ntmp.r][ntmp.c] = 1;
			}
		}
	}
	return 1;
}