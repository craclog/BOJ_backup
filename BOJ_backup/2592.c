#include<stdio.h>

int main()
    {
    int n[10];
    int cnt[101];
    int sum=0;
    int avg;
    int dap=0;
    int i,j;
    int flag=0;
    
    for(i=0;i<101;i++)
        cnt[i]=0;
    
    for(i=0;i<10;i++)
        {
     	scanf("%d",&n[i]);
        sum += n[i];
        cnt[n[i]/10]++;
    }
    
    avg = sum/10;
    
    for(i=0;i<101;i++)
        {
        if(dap < cnt[i])
            {
            dap = cnt[i];
        	flag = i;
    
        }
    }
    
    printf("%d\n%d\n",avg,flag*10);
    
    
    
    
    
    
    
    return 0;
}