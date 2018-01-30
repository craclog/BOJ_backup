#include<stdio.h>

int main()
    {
    int n,i,tmp;
    int a[102];
    int cnt=0;
    
    scanf("%d",&n);
    for(i=0;i<101 ;i++)
        a[i] = 0;
    
   
    
    for(i=0;i<n;i++)
        {
        scanf("%d",&tmp);
    	if(a[tmp] == 1)
            cnt++;
        a[tmp] = 1;
    }
    
    printf("%d\n",cnt);
        
    
    
        
    
    
    
    return 0;
}