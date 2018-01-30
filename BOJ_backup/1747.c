#include <stdio.h>
#define SWAP(x,y) { int t, (t) = (x); (x) = (y); (y) = (t); }

int reverse(int n){
    int res = 0;
    
    while(n>0){
        res *=10;
        res += n%10;
        n /= 10;
    }
    return res;
}

int main(){
    int i,j,tc;
    int arr[100];
    int n,isSosu;
    scanf("%d",&n);
    //printf("%d\n",reverse(n));
    for(i=n; i < 1003002; i++){
        isSosu = 1;
        for(j=2; j*j<=i; j++){
            if(i%j == 0){
                isSosu = 0;
                break;
            }
        }
        if(isSosu)
            if(i == reverse(i)){
                printf("%d\n",i);
                return 0;
            }
        
    }
    return 0;
}
