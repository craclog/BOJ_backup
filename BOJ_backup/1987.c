#include<stdio.h>

typedef struct {
	int r,c;
}Point;
char map[22][22];

int nPos[4][2] = { { 1,0},{-1,0},{0,1},{0,-1} };
int max;
Point queue[1000];
int front,rear;

void dfs(int r, int c, int *visited, int cnt);

int main(){
	int i,j,cnt;
	int visited[27] = {0,};
	int r,c;
	scanf("%d %d",&r,&c);
	getchar();
	for(i=1; i <= r ; i++){
		for(j = 1; j<= c; j++){
			scanf("%c",&map[i][j]);
		}
		getchar();
	}
	for(i=0; i <= r+1 ; i++){
		map[i][0] = map[1][1];
		map[i][c+1] = map[1][1];
	}
	for(i=0; i <= c+1 ; i++){
		map[0][i] = map[1][1];
		map[r+1][i] = map[1][1];
	}
	visited[map[1][1]-'A'] = 1;
	max = 1;
	dfs(1,1,visited,1);
	printf("%d\n",max);
	/*
	for(i=1; i <= r ; i++){
		for(j = 1; j<= c; j++){
			printf("%c",map[i][j]);
		}
		puts(" ");
	}
	*/

	return 0;
}

void dfs(int r, int c, int *visited, int cnt){
	int i;
	int nr,nc;
	//int nvisited[27];

	//for(i=0; i<27; i++)
	//	nvisited[i] = visited[i];
	//visited[ map[r][c]-'A' ] = 1;
	for(i=0 ; i<4; i++){
		nr = r + nPos[i][0];
		nc = c + nPos[i][1];
		if( visited[ map[nr][nc]-'A' ] != 1 ){
			visited[ map[nr][nc]-'A' ] = 1;
			cnt++;
			if( max < cnt )
				max = cnt;
			//printf("r:%d, c:%d, =%c, cnt:%d\n",nr,nc,map[nr][nc],cnt);
			dfs(nr,nc,visited,cnt);
			visited[ map[nr][nc]-'A' ] = 0;
			cnt--;
		}
	 	//visited[i] = visited[map[nr][nc]-'A'];
	}

}