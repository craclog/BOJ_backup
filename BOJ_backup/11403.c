#include <stdio.h>
#include <stdlib.h>

int n;
int g[102][102];
int res[102][102] = { 0, };
int visited[102] = { 0, };
int start;
int flag;
void dfs(int v) {
	int i;
	visited[v] = 1;
	//visited[start] = 0;
	for (i = 1; i <= n; i++) {
		
		if (g[v][i] == 1 && start == i) {
			flag = 1;
			//printf("flag set : %d-%d\n", v, i);
		}
		if (visited[i] != 1 && g[v][i] == 1) {
			//res[v][i] = 1;
			//printf("%d %d", v, i);
			dfs(i);
		}
	}
}
int main() {
	
	int i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &g[i][j]);
		}
	}
	for (i = 1; i <= n; i++) {
		start = i; flag = 0;
		dfs(i);
		if( flag == 0)
			visited[i] = 0;
		for (j = 1; j <= n; j++)
			res[i][j] = visited[j];
		for (j = 1; j <= n; j++)
			visited[j] = 0;
	}
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d ", res[i][j]);
		}
		puts("");
	}
	/*
	for (i = 1; i <= n; i++)
		printf("%d ", visited[i]);
	*/
	return 0;
}