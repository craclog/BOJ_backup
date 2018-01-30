#include <stdio.h>
#define SWAP(x,y) { int t; (t) = (x); (x) = (y); (y) = (t); }

int gcd(x,y);

int main(){
    int i,au,ad,bu,bd;
    int ru,rd,isswaped = 0;
    int divi;
    
    scanf("%d%d%d%d",&au,&ad,&bu,&bd);
    
    ru = au*bd + bu*ad;
    rd = ad*bd;
    
    if(ru > rd){
        SWAP(ru,rd);
        isswaped = 1;
    }
    divi = gcd(rd,ru);
    ru /= divi;
    rd /= divi;
    
    if(isswaped)
        SWAP(ru,rd);
        
    printf("%d %d\n",ru,rd);
    return 0;
}

int gcd(x,y){
    
    if(x%y == 0)
        return y;
    else
        return gcd(y,x%y);
}