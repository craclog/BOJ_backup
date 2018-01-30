#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int map[1001][1001] = { 0, };
int queue[1001];
int dis[1001] = { 0, };
int front, rear;
int n,m;
int a, b;
int found = 0;
void bfs(int v);

int main() {
	
	int tmp1, tmp2;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &tmp1, &tmp2);
		map[tmp1][tmp2] = 1;
		map[tmp2][tmp1] = 1;
	}
	bfs(a);
	if( found == 1)
		printf("%d\n", dis[b]);
	else puts("-1");

	return 0;
}

void bfs(int v) {
	front = rear = -1;
	queue[++rear] = v;
	while (rear != front) {
		v = queue[++front];
		if (v == b) {
			found = 1;
			return;
		}
		for (int i = 1; i <= n; i++) {
			if (dis[i] == 0 && map[v][i] == 1) {
				queue[++rear] = i;
				dis[i] = dis[v] + 1;
			}
		}
	}
	return ;
}