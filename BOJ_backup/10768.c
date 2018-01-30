#include <stdio.h>
int main(){
    int i,tc;
    int a,b;
    scanf("%d %d",&a,&b);
    if( a == 2){
        if( b > 18 )
            puts("After");
        else if( b < 18 )
            puts("Before");
        else puts("Special");
    }
    else if( a>2)
        puts("After");
    else puts("Before");
    
    return 0;
}