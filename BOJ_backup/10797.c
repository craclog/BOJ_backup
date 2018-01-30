#include<stdio.h>

int main(){
    int n,i,a;
    int res = 0;
    scanf("%d",&n);
    for(i=0;i<5;i++){
        scanf("%d",&a);
        if(a==n) ++res;
        
    }
    printf("%d",res);
    return 0;
}