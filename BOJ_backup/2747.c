#include<stdio.h>

int main()
{
	int n,i;
    int a[50];
    a[0] = 0;
    a[1] = 1;
    scanf("%d",&n);
    for(i=2 ; i<n+1 ; i++)
    {
    	a[i] = a[i-1] + a[i-2];   
    }
    printf("%d\n",a[n]);
    
    return 0;
}