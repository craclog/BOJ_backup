// 케빈 베이컨 게임 BFS
/*
5 5
1 3
1 4
4 5
4 3
3 2
*/
#include <stdio.h>
#include <stdlib.h>

int g[102][102] = { 0, };
int distance[102][102] = { 0, };
int queue[100000];
int rear, front;
int n;
void bfs(int v);

int main() {
	int m,min = 1000;
	int res;
	int tmp1, tmp2;
	int i, j;
	int sum[102] = { 0, };
	scanf("%d %d", &n,&m);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &tmp1, &tmp2);
		g[tmp1][tmp2] = 1;
		g[tmp2][tmp1] = 1;
	}

	for (i = 1; i <= n; i++) {
		//printf("bfs %d started\n", i);
		bfs(i);
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			sum[i] += distance[i][j];
			
		}
		//printf("%d ", sum[i]);
		if (min > sum[i]) {
			min = sum[i];
			res = i;
		}
			
	}
	printf("%d\n", res);
	return 0;
}
void bfs(int v) {
	int i;
	int nv, nnv;
	rear = -1; front = -1;
	distance[v][v] = 0;
	queue[++rear] = v;
	while (rear != front) {
		nv = queue[++front];
		//printf(" -que : %d\n", nv);
		for (i = 1; i <= n; i++) {
			if( i != v )
			if (g[nv][i] == 1 && distance[v][i] == 0) {
				queue[++rear] = i;
				//printf(" +que : %d\n", i);
				distance[v][i] = distance[v][nv] + 1;
			}
		}
	}
}