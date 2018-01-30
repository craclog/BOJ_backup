#include <stdio.h>
#define MAX_NUM 10000
int main(){
    int n,i,j;
    int tmp;
    int count[MAX_NUM+1];
    scanf("%d",&n);
    for(i=0;i<=MAX_NUM;i++){
        count[i] = 0;
    }
    for(i=0 ; i<n; i++){
        scanf("%d",&tmp);
        count[tmp]++;
    }
    for(i=1;i<=MAX_NUM; i++){
        for(j=0; j<count[i]; j++){
            printf("%d\n",i);
        }
    }
    return 0;
}
