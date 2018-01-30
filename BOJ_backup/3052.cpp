#include <stdio.h>

int main()
{
        int i,n;
        int a[43]={0,};
        int num[10];
        int cnt=0;
        for(i=0 ; i<10 ; i++)
        {
                scanf("%d",&num[i]);
                a[num[i]%42]++;
        }
        for(i=0 ; i<42 ; i++)
        {
                if(a[i]>0) cnt++;
        }
        printf("%d\n",cnt);
        return 0;
}
