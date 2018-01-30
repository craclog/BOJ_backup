#include<stdio.h>

int main()
    {
    double sum=0,dif=0;
    double a,b;
    
    scanf("%lf %lf",&sum,&dif);
    if(sum<dif)
    {
        
        printf("-1\n");
        return 0;
    }
    a = (sum+dif)/2;
    b = sum-a;
    
    if(a!= (int)a || b!=(int)b)
        printf("-1\n");
    else
    printf("%.lf %.lf\n",a,b);
   
    
    return 0;
}