#include<stdio.h>

int main(){
    int a,b,c,d,p,i;
    int x,y;

    scanf("%d %d %d %d %d",&a,&b,&c,&d,&p);
    x = p * a;
    y = b;
    if( p > c ){
        p -= c;
        y += p * d;
    }
    if( x < y ) printf("%d\n",x);
    else printf("%d\n",y);

    return 0;
}
