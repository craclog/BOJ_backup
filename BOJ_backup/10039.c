#include<stdio.h>

int main()
{
    int a[5];
    int i,sum=0;
    for(i=0;i<5;i++)
    {
		scanf("%d",&a[i]);   
        if(a[i]<40)
            a[i]=40;
        sum+=a[i];
    }
    
    printf("%d",sum/5);
    return 0;
}