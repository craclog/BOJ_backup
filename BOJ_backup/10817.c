#include <stdio.h>
#define SWAP(x,y) { int t; (t)=(x); (x)=(y); (y)=(t); }

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b){
        SWAP(a,b);
    }
    if(a<c){
        SWAP(a,c);
    }
    if(b<c)
        SWAP(b,c);
    printf("%d\n",b);
    return 0;
}
