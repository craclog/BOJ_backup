#include <stdio.h>
#define SWAP(x,y) { int t, (t) = (x); (x) = (y); (y) = (t); }

int Cnt(int count){
    count++;
    if(count == 2)
        count = 0;
    return count;
}
int ChangeDir(dir){
    dir++;
    if(dir == 4)
        dir = 0;
    return dir;
}

int main(){
    int i = 1,j;
    int dir = 0; 
    // 0:Up 
    // 1:Rignt
    // 2:Left
    // 3:Down
    int map[1000][1000];
    int n,target;
    int count = 0;
    int x,y;
    int move = 1;
    int a,b;
    scanf("%d%d",&n,&target);
    x = y = n/2;
    
    while(i <= n*n){
        for(j=0; j<move; j++){
            if(target == i){
                a = x+1;
                b = y+1;
            }
            map[x][y] = i++;
            switch(dir){
                case 0:
                    x--;
                    break;
                case 1:
                    y++;
                    break;
                case 2:
                    x++;
                    break;
                case 3:
                    y--;
                    break;
            }
        }
        dir = ChangeDir(dir);
        count = Cnt(count);
        if(count == 0)  move++;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ",map[i][j]);
        }
        puts("");
    }
    printf("%d %d\n",a,b);
        
    
    return 0;
}


