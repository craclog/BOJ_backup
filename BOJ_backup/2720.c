#include<stdio.h>

int main()
{
 	int q,w,e,r;
    int cash;
    int i;
    int tc;
    scanf("%d",&tc);
    
    while(tc--)
    {
		scanf("%d",&cash);
		
        

		q = cash/25;
    	cash = cash%25;
        w = cash/10;
        cash = cash%10;
        e = cash/5;
        cash = cash%5;
        r = cash;
        printf("%d %d %d %d\n",q,w,e,r);
    }
    
    
    return 0;
}