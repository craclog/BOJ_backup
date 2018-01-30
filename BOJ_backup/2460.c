#include<stdio.h>

int main(){
    
    int cur=0;
    int max=0;
    int in[10];
    int out[10];
    int i;
    
    for(i=0;i<10;i++){
        scanf("%d %d",&out[i],&in[i]);
        cur-= out[i];
        cur+= in[i];
        if(cur>=10000){
            max = 10000;
            cur = 10000;
        }
        if(cur>max){
            max = cur;
        }
        
    }
    
    printf("%d\n",max);
    
    
    
    
    return 0;
}