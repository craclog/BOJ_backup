#include<stdio.h>

int main()
    {
    int a[6];
    int b[6];
    int i;
    
    b[0]=1;
    b[1]=1;
    b[2]=2;
    b[3]=2;
    b[4]=2;
    b[5]=8;
    
    for(i=0; i<6;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<6;i++)
        {
    	printf("%d ",b[i]-a[i]);
    }
    printf("\n");
    
    
    
    
    return 0;
}