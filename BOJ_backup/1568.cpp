#include <stdio.h>

int main()
{
        int n;
        int sub=1;
        int cnt=0;
        scanf("%d",&n);

        while(1){
                if(n == 0)
                        break;
                if(n-sub >= 0){
                n = n-sub;
                cnt++;
                sub++;
                }
                else{
                sub=1;
                }
        }
        printf("%d\n",cnt);

        return 0;
}
