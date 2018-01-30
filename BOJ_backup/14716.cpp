#include <cstdio>
#include <algorithm>
using namespace std;
int a[251][251] = {0,};
int visit[251][251] = {0,};
int dir[8][2] = {{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
int m,n;
void dfs(int r, int c){ 
    visit[r][c] = 1;
    for(int i=0; i<8; i++)
    {   
        int nr = r + dir[i][0];
        int nc = c + dir[i][1];
        if( 0 <= nr && nr <= m-1 && 0 <= nc && nc <= n-1 && visit[nr][nc] != 1 && a[nr][nc] == 1 ) 
        {   
            dfs(nr,nc); 
        }   
    }   
}


int main(){
    scanf("%d %d",&m,&n);
    //fill(visit,visit+251,0);
    for(int i=0; i<m; i++)
    {   
        for(int j=0; j<n; j++)
        {   
            scanf("%d",&a[i][j]);
        }   
    }   
    int cnt = 0;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
        {   
            if( visit[i][j] == 1 || a[i][j] == 0) continue;
            dfs(i,j);
            cnt++;
        }   
    printf("%d\n",cnt);

    return 0;
}