#include <stdio.h>

int fac(int n){
    int i;
    int res = 1;
    for(i=1; i<=n; i++){
        res *= i;
    }
    return res;
}
int main(){
    int i;
    int n,k;
    int res;
    scanf("%d%d",&n,&k);
    res = fac(n)/fac(k)/fac(n-k);
    printf("%d\n",res);
    
  
    return 0;
}
