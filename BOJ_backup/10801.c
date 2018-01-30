#include <stdio.h>

int main(){
    int i,j;
    int a[10], b[10];
    int res = 0;
    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++){
        scanf("%d",&b[i]);
    }
    for(i=0; i<10; i++){
        if( a[i] > b[i] )
            res++;
        else if( a[i] < b[i])
            res--;
    }
    if( res > 0 ) puts("A");
    else if( res < 0 ) puts("B");
    else puts("D");
    return 0;
}