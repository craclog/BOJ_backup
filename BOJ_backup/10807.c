#include<stdio.h>

int main(){
    int arr[102];
    int n,i,search;
    int cnt = 0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&search);
    for(i=0; i<n; i++){
        if( arr[i] == search ) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
