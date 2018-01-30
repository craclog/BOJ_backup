#include<stdio.h>

int main(){
    
    int ham[3];
    int drink[2];
    int i;
    int ham_min=3000;
    int dap=3000;
    
    for(i=0;i<3;i++){
        scanf("%d",&ham[i]);
        if(ham[i]<ham_min)
            ham_min = ham[i];
    }
    for(i=0;i<2;i++){
        scanf("%d",&drink[i]);
        if(drink[i]<dap)
            dap = drink[i];
    }
    
    dap += ham_min;
    dap -=50;
    printf("%d\n",dap);
    
    return 0;
}