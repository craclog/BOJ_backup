#include<stdio.h>

int main()
    {
    int a,b;
    int tc,i,j;
    int min,max;
    
    scanf("%d",&tc);
    
    while(tc--){
        scanf("%d %d",&a,&b);
        for(i=a ;i>0;i--){
            if(a%i==0 && b%i==0){
                min = i;
                break;
            }
        }
        
        max = a*b/min;
        
        printf("%d %d\n",max,min);
        
        
        
    }
    
    
    return 0;
}