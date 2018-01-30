#include <stdio.h>
//max dist = 18258
int main(){
    int i;
    int add = 0;
    int n;
    int input;
    int dist;
    dist = 1;
    n = 1;
    
    scanf("%d",&input);
    for(i=0;dist<19000;i++){
        if(input <= n){
            printf("%d\n",dist);
            break;
        }
        add += 6;
        n += add;
        //printf("n : %d\n",n);
        dist++;
    }
    
    return 0;
}