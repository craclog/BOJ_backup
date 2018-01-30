#include <stdio.h>

int queue[1000000];
int distance[1000001] = { 0, };
int k;
void bfs(int v);

int main() {
	int n;
	int i,j;
	int max = 0;
	scanf("%d %d", &n, &k);

	bfs(n);
	printf("%d\n", distance[k]);
	/*
	for (i = 0; i <= 100000; i++) {

		k = j;
		bfs(i);
		printf("%d ", i);
		for (j = 0; j <= 100000; j++) {
			if (max < distance[j])
				max = distance[j];
		}
		for (j = 0; j <= 100000; j++) {
			distance[j] = 0;
		}
		
	}
	*/
	return 0;
}
void bfs(int v) {
	int rear, front;
	int nv;
	front = rear = -1;
	distance[v] = 0;
	queue[++rear] = v;
	while (front != rear) {
		v = queue[++front];
		if (v >= 100001)
			continue;
		if (v == k) {
			return ;
		}
		nv = v + 1;
		if (distance[nv] == 0 && v < k ) {
			queue[++rear] = nv;
			distance[nv] = distance[v] + 1;
		}
		nv = v - 1;
		if (v != 0 && distance[nv] == 0) {
			queue[++rear] = nv;
			distance[nv] = distance[v] + 1;
		}
		nv = v * 2;
		if (v != 0 && distance[nv] == 0 && v < k && nv < 100001) {
			queue[++rear] = nv;
			distance[nv] = distance[v] + 1;
		}
	}
}