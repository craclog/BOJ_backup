#include <stdio.h>
//unsigned long long
unsigned long long f(unsigned long long x, unsigned long long n, unsigned long long c){

    
    if(n == 0)  return 1;
    else if(n == 1)   return x ;
    else if(n%2 == 0) return f((x%c)*(x%c),  n / 2, c)%c;
    else if(n%2 == 1) return ((x%c) * (f((x%c)*(x%c), (n-1) / 2, c)%c));
}

int main(){
    unsigned long long a,b,c,i,mod,num,res;
    scanf("%lld%lld%lld",&a,&b,&c);
    num = a;
    res = f(a,b,c)%c;
    
    printf("%lld\n",res);
    
    return 0;
}


