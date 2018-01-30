#include<stdio.h>

int main()
    {
    int a,b,c;
    int dap;
    
    int num1,num2;
    
    scanf("%d %d",&num1,&num2);
    
    a = num1 * (num2%10);
    b = num1 * (num2/10%10);
    c = num1 * (num2/100);
    
    dap = a + b*10 + c*100;
    
    
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",dap);
    
    
    return 0;
}