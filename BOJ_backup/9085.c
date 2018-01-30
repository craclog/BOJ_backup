#include<stdio.h>
int main()
{
    int i,tc;
    int cnt,tmp;
    int sum=0;
    
    scanf("%d",&tc);
    while(tc--)
    {
     scanf("%d",&cnt);   
        for(i=0 ; i<cnt ; i++)
        {
         scanf("%d",&tmp);
            sum+=tmp;
        }
        printf("%d\n",sum);
        sum=0;
        
    }
    
    return 0;
    
}