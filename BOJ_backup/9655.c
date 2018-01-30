#include <stdio.h>

int result[2][1001] = {0};
int WIN(int x, int a, int b){
    if(x==a)
        return a;
    else if(x==b)
        return b;
    else{
        //puts("Always Lose");
        return a;
    }
}
int dol(int num, int player){
    //printf("player : %d, num : %d\n",player,num);
    if(num == 2)
        return -1;
    else if(num <= 3){
        return player;
    }
    else if(num == 4){
        //printf("player : %d, num : %d\n",player,num);
        return player*(-1);
    }
    else{
        if(player == -1){
            if(result[0][num]){
                return result[0][num];
            }
            else
                return result[0][num] = WIN(player,dol(num-1,player*(-1)),dol(num-3,player*(-1)));
        }
        else{
            if(result[1][num]){
                return result[1][num];
            }
            else
                return result[1][num] = WIN(player,dol(num-1,player*(-1)),dol(num-3,player*(-1)));
        }
    }
}

int main(){
    //player 1: sk, -1:cy
    int i;
    int num;
    int res;
    int player = 1;
    scanf("%d",&num);
    res = dol(num,player);
    if(res == 1)
        puts("SK");
    else 
        puts("CY");
    return 0;
}