#include <stdio.h>

int main(){
    int i,j,n,m;
    int flag = 1;
    int minflag = -1;
    int sum = 0;
    int min;
    scanf("%d%d",&m,&n);
    min = n;
    for(i=m; i<=n; i++){
        if(i == 1)
            continue;
        for(j=2; j<i; j++){
            if(i%j == 0){
                flag = -1;
                break;
            }
        }
        if(flag == 1){
            sum += i;
            //printf("sosu : %d\n",i);
            if(minflag == -1){
                min = i;
                minflag = 1;
            }   
        }
        flag = 1;
        
    }
    if(sum == 0)
        printf("-1\n");
    else
        printf("%d\n%d\n",sum,min);
    return 0;
}