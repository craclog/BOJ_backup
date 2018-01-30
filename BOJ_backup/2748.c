#include<stdio.h>

int main()
{
	long double a[91];
    int n,i;
    a[0] = 0;
    a[1] = 1;
    scanf("%d",&n);
    for(i=2 ; i<n+1; i++)
    {
     	a[i] = a[i-1] +a[i-2];   
    }
    printf("%.Lf\n",a[n]);
    
    
    return 0;
}