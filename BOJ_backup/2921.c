#include<stdio.h>

int main()
{
 	int i,j,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=(i*(i+1));
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        sum+=j;
    }   
    printf("%d\n",sum);
    
    return 0;
}