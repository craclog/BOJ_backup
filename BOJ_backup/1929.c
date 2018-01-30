#include <stdio.h>
#include <math.h>
int main(){
    int i,j,n,m;
    int flag = 1;
    int sum = 0;
    int sqrted;
    scanf("%d%d",&m,&n);
    for(i=m; i<=n; i++){
        if(i == 1)
            continue;
        sqrted = (int)sqrt(i);
        for(j=2; j<=sqrted; j++){
            if(i%j == 0){
                flag = -1;
                break;
            }
        }
        if(flag == 1){
            printf("%d\n",i);
        }
        flag = 1;
        
    }
    return 0;
}