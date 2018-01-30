#include <stdio.h>
#include <stdlib.h>
//BFS
typedef struct {
	int x;
	int y;
}Point;

typedef struct _node* nptr;
typedef struct _node {
	Point p;
	nptr link;
}node;

void add(int x, int y);
Point del();

char maze[102][102];
int distance[102][102] = { 0, };
Point parent[102][102];
int cnt = 0 ;
Point here,there;

nptr queue;
nptr rear, front;

int main() {
	int n, m;
	int i, j;
	scanf("%d%d", &n, &m);
	getchar();
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%c", &maze[i][j]);
		}
		getchar();
	}
	for (i = 0; i <= n+1; i++) {
		maze[i][0] = '0';
		maze[i][m+1] = '0';
	}
	for (j = 0; j <= m + 1; j++) {
		maze[0][j] = '0';
		maze[n+1][j] = '0';
	}
	/*----------------------------------------
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			printf("%c ", maze[i][j]);
		}
		puts("");
	}

	*/
	add(1, 1);
	distance[1][1] = 1;
	parent[1][1].x = 1;
	parent[1][1].y = 1;
	while (cnt != 0){
		//puts("start of While");
		here = del();
		//printf("First here : %d %d\n", here.x, here.y);
		if (maze[here.x - 1][here.y] == '1') {
			there.x = here.x - 1;
			there.y = here.y;
			if (distance[there.x][there.y] == 0) {
				add(there.x, there.y);
				distance[there.x][there.y] = distance[here.x][here.y] + 1;
			}
		}
		if (maze[here.x + 1][here.y] == '1') {
			there.x = here.x + 1;
			there.y = here.y;
			if (distance[there.x][there.y] == 0) {
				add(there.x, there.y);
				distance[there.x][there.y] = distance[here.x][here.y] + 1;
			}
		}
		if (maze[here.x][here.y-1] == '1') {
			there.x = here.x;
			there.y = here.y - 1;
			if (distance[there.x][there.y] == 0) {
				add(there.x, there.y);
				distance[there.x][there.y] = distance[here.x][here.y] + 1;
			}
		}
		if (maze[here.x][here.y+1] == '1') {
			there.x = here.x;
			there.y = here.y + 1;
			if (distance[there.x][there.y] == 0) {
				add(there.x, there.y);
				distance[there.x][there.y] = distance[here.x][here.y] + 1;
			}
		}
	}// while end
	//printf("RESult\n");
	printf("%d\n", distance[n][m]);
	return 0;
}

void add(int x, int y) {
	nptr newNode;
	newNode = (nptr)malloc(sizeof(node));
	newNode->p.x = x;
	newNode->p.y = y;
	newNode->link = NULL;
	if (cnt == 0) {
		front = newNode;
		rear = newNode;
	}
	else {
		rear->link = newNode;
		rear = newNode;
	}
	cnt++;
	//printf("added %d,%d\n",x,y);
}
Point del() {
	nptr delNode;
	Point ret;
	if (cnt == 0) {
		puts("del Err");
		return ret;
	}
	delNode = front;
	if (cnt == 1) {
		front = NULL;
		rear = NULL;
	}
	else
		front = front->link;
	cnt--;
	ret.x = delNode->p.x;
	ret.y = delNode->p.y;
	free(delNode);
	//puts("deleted");
	return ret;
}