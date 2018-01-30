#include <stdio.h>

int main(){
    int tc,i;
    int flag;
    int a[3];
    int sum;
    scanf("%d",&tc);
    while(tc--){
        flag = 0;
        sum = 0;
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        sum += a[0]*15;
        sum += a[1]*20;
        sum += a[2]*25;
        
        for(i=0; i<=100; i++){
            if(sum + i*40 >= 9000){
                printf("%d\n",i);
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            puts("impossible");
        }
    }
    return 0;
}