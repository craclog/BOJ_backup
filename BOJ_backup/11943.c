#include <stdio.h>
#define MIN(x,y) ( (x)<(y) ? (x):(y) )
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%d\n",MIN(a+d,b+c));
    
    return 0;
}