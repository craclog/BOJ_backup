#include <stdio.h>

int main(){
    int i;
    int count = 1 ,sum = 64;
    int shortest = 64;
    int x;
    scanf("%d",&x);
    while(sum != x){
        if(sum > x){
            shortest /= 2;
            count++;
            if(sum - shortest >= x){
                count--;
                sum -= shortest;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
