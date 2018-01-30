#include <stdio.h>
int main(){
    int i;
    int up,down;
    int quot;
    while(1){
        scanf("%d %d",&up,&down);
        if( !up && !down)
            break;
        quot = up / down;
        up = up - quot*down;
        printf("%d %d / %d\n",quot, up, down);
    }
    return 0;
}