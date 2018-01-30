#include <stdio.h>

int main(){
    int a[20001];
    int i, tmp;
    int sum;
    
    for(i=0;i<20000;i++){
        a[i] = i;
    }
    for(i=0; i<11000; i++){
        sum = i;
        tmp = i;
        while(tmp>0){
            sum += tmp%10;
            tmp = tmp/10;
        }
        a[sum] = -1;
    }
    for(i=0; i<10000; i++){
        if(a[i]>0)
            printf("%d\n",a[i]);
    }
    
    
    
    return 0;
}