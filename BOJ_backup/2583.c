#include <stdio.h>
#define SWAP(x,y) { int t; t = (x); (x) = (y); (y) = t; }
// row : n (5)
// col : m (7)
// 1,1 ~ n+1,m+1
int map[102][102] = {0,};
int visited[102][102] = {0,};
int nPos[4][2] = { {-1,0},{1,0},{0,1},{0,-1}};
int cnt[102] = {0,};
int cnt_len;
void dfs(int r, int c);

int main(){
	int m,n,k;
	int i,j,l;
	int x1,x2,y1,y2;
	
	scanf("%d %d %d",&m,&n,&k);
	for(i=0 ;i <k; i++){
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		for(j = x1; j < x2; j++){
			for(l = y1; l < y2; l++){
				map[j + 1][l + 1] = 1;
			}
		}
	}
	for( i = 0; i <= n+1; i++){
		map[i][0] = 1;
		map[i][m+1] = 1;
	}
	for( i = 0; i <= m+1; i++){
		map[0][i] = 1;
		map[n+1][i] = 1;
	}
	/*
	for( i = 0; i <= n+1; i++){
		for( j = 0; j <= m+1; j++){
			printf("%d ",map[i][j]);
		}
		puts(" ");
	}
	*/
	cnt_len = 0;
	for( i = 1; i <= n; i++){
		for( j = 1; j <= m; j++){
			if( map[i][j] == 0 )
				dfs(i,j);
			//printf("i:%d, j:%d, cnt[]:%d\n",i,j,cnt[cnt_len]);
			if( cnt[cnt_len] != 0 ){
				cnt_len++;
			}		
			
		}
	}
	
	for(i=0; i < cnt_len - 1; i++){
		for(j = i+1; j < cnt_len; j++){
			if( cnt[i] > cnt[j] )
				SWAP(cnt[i],cnt[j]);
		}
	}
	printf("%d\n",cnt_len);
	for(i=0; i<cnt_len; i++){ 
		printf("%d ",cnt[i]);
	}
	puts("");
	return 0;
}

void dfs(int r, int c){
	int i;
	int nr,nc;
	if( visited[r][c] == 1)
		return ;
	cnt[cnt_len]++;
	visited[r][c] = 1;
	
	for(i= 0 ; i<4; i++){
		nr = r + nPos[i][0];
		nc = c + nPos[i][1];
		if( visited[nr][nc] != 1 && map[nr][nc] == 0){
			//visited[nr][nc] = 1;
			dfs(nr,nc);
		}
	}
}