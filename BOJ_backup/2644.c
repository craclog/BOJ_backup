#include <stdio.h>

int g[102][102] = {0,};
int queue[102];
int front,rear;
int distance[102] = {0,};
void bfs(int v);
int main(){
	int n,m;
	int x,y;
	int i,j;
	int tmp1,tmp2;
	scanf("%d",&n);
	scanf("%d %d",&x,&y);
	scanf("%d",&m);
	for(i=0; i<m; i++){
		scanf("%d %d",&tmp1,&tmp2);
		g[tmp1][tmp2] = 1;
		g[tmp2][tmp1] = 1;
	}
	bfs(x);
	if( distance[y] == 0 ){
		puts("-1");
	}
	else
		printf("%d\n",distance[y]);
	return 0;
}

void bfs(int v){
	int i,nv;
	distance[v] = 0;
	front = rear = -1;
	queue[++rear] = v;
	while(front != rear){
		v = queue[++front];
		for(nv=1; nv<= 100; nv++){
			if( distance[nv] == 0 && g[v][nv] == 1){
				distance[nv] = distance[v] + 1;
				queue[++rear] = nv;
			}
		}
	}
}