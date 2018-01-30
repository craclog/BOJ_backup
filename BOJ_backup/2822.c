#include<stdio.h>

typedef struct{
    int score;
    int num;
}str;

int main()
    {
    str a[8];
    str tmp;
    int i,j;
    int dap=0;
    int dp[5];
    int temp;
    
    
    for(i=0;i<8;i++)
        {
    	scanf("%d",&a[i].score);
        a[i].num = i+1;
    }
    
    /*
    for(i=0;i<8;i++)
        {
    	printf("%d ",a[i].score);
        printf("%d\n",a[i].num);
    }
    */
    
    for(i=0;i<8;i++)
        for(j=i;j<8;j++)
        	{
 			if(a[i].score > a[j].score)
                {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    
    	}
    
    for(i=3;i<=7;i++)
        {
        dap += a[i].score;
        dp[i-3] = a[i].num;
    }
        
    
        
    for(i=0;i<5;i++)
        for(j=i;j<5;j++)
        {
    	if(dp[i]>dp[j])
            {
            temp = dp[i];
            dp[i] = dp[j];
            dp[j] = temp;
            
        }
    
    }
    
    printf("%d\n",dap);
    for(i=0;i<5;i++)
    printf("%d ",dp[i]);
    printf("\n");
    
    
    
    
    return 0;
    
}