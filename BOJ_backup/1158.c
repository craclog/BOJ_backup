#include <stdio.h>

int main(){
    int i;
    int curIndex = 0;
    int arr[5001] = {0};
    int res[5001];
    int count = 0;
    int resIndex = 0;
    int n,m;
    scanf("%d%d",&n,&m);
    
    
    while(count < n){
        for(i=0; i<m; i++){
            curIndex++;
            if(curIndex == n+1)
                    curIndex = 1;
            while(arr[curIndex] == -1){
                curIndex++;
                if(curIndex == n+1)
                    curIndex = 1;
            }
        }
        arr[curIndex] = -1;
        res[resIndex] = curIndex;
        resIndex++;
        count++;
    }
    printf("<%d",res[0]);
    for(i=1; i<n; i++){
        printf(", %d",res[i]);
    }
    puts(">");
    return 0;
}
