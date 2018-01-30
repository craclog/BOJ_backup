#include <stdio.h>

int main(){
    int i,n;
    int arr[100];
    int isadd = 1;
    int gap;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    gap = arr[1] - arr[0];
    for(i=1; i<n-1; i++){
        if(arr[i+1] - arr[i] != gap){
            isadd = 0;
            break;
        }
    }
    if(isadd){
        //printf("%d %d\n",arr[n-1],gap);
        printf("%d\n",(arr[n-1]+gap));
    }
    else{
        //puts("!");
        gap = arr[1]/arr[0];
        printf("%d\n",arr[n-1]*gap);
    }
    return 0;
}
