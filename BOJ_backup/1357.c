#include <stdio.h>

int Rev(int n){
    int i;
    int res = 0;
    while(1){
        res += n%10;
        n /= 10;
        if(n == 0)
            break;
        res *= 10;
    }
    return res;
}
int main(){
    int i,a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",Rev(Rev(a)+Rev(b)));
    
    return 0;
}
