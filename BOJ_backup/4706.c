#include<stdio.h>
#include<math.h>

int main(){
    double a,b;
    double dap;
    double tmp;
    
    while(1){
        scanf("%lf %lf",&a,&b);
        if(a==0 && b==0)
            return 0;
        
        tmp = 1 - (b/a)*(b/a);
        dap = sqrt(tmp);
        
        printf("%.3lf\n",dap);
        
    }
    
    
    return 0;
}