#include <stdio.h>
#define MAX 4294967295
int main(){
    long long i,n = 0;
    long long sum = 0;
    long long s = 0;

    long long j = 1;
    scanf("%lld",&s);
    
    
    for(i=1; i<MAX; i++){
        j++;
        sum += j;
        if(sum >= s){
            printf("%lld\n",j-1);
            break;
        }
    }
   
    return 0;
}
