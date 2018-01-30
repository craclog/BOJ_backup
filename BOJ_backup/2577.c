#include <stdio.h>

int main(){

    int a,b,c,i;
    int sum,tmp;
    int mod;
    int num[10] = {0};
    scanf("%d%d%d",&a,&b,&c);
    sum = a*b*c;
    tmp = sum;
    while(tmp != 0){
        mod = tmp % 10;
        num[mod]++;
        tmp = tmp/10;
    }
    for(i=0 ; i<10; i++){
        printf("%d\n",num[i]);
    }
    return 0;
}