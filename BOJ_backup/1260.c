#include <stdio.h>
/*
8 10 1
1 2 1 3 2 4 2 5 4 8 5 8 3 6 3 7 6 8 7 8

DFS : 1 2 4 8 5 6 3 7
BFS : 1 2 3 4 5 6 7 8
*/
// n is not 1~1000
// n is Interger!
int edge[1001][1001] = {0};
int queue[1001] = {0};
int visited[1001] = {0};

void DFS(int v){
    int i;
    visited[v] = 1;
    
    for(i=1; i<1001; i++){
        if(edge[v][i] == 1 && visited[i] != 1){
            printf(" %d",i);
            DFS(i);
        }
    }
}

void BFS(int v){
    int i;
    int head = 0;
    int tail = 0;
    queue[tail++] = v;
    visited[v] = 1;
    printf("%d",v);
    
    while(head < tail){
        v = queue[head++];
        for(i=1; i<1001; i++)
            if(edge[v][i] == 1 && visited[i] != 1){
                queue[tail++] = i;
                visited[i] = 1;
                printf(" %d",i);
                //printf("head: %d, tail: %d, i : %d\n",head,tail,i);
            }
        
    }
    
}

int main(){
    int i,n,m,v;
    int tmp1,tmp2;
    
    int sTop = -1;
    int qHead, qTail;
    
    scanf("%d%d%d",&n,&m,&v);
    for(i=0; i<m; i++){
        scanf("%d%d",&tmp1,&tmp2);
        edge[tmp1][tmp2] = edge[tmp2][tmp1] = 1;
    }
    printf("%d",v);
    DFS(v);
    puts("");
    //initializing
    for(i=0; i<1001; i++)
        visited[i] = 0;
        
    BFS(v);
    puts("");
    
    
    return 0;
}