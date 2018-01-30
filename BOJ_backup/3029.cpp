#include <stdio.h>

int main()
{
        int hour,min,sec;
        int h,m,s;
        int tmp1,tmp2;
        int rh,rm,rs;
        scanf("%d %*c%d %*c%d",&hour,&min,&sec);
        scanf("%d %*c%d %*C%d",&h,&m,&s);
        tmp1 = hour*3600 + min*60 + sec;
        tmp2 = h*3600 + m*60 + s;
        if(tmp2>tmp1){
                rh = (tmp2-tmp1)/3600;
                rm = (tmp2-tmp1)%3600/60;
                rs = (tmp2-tmp1)%60;
        }
        else{
                tmp2+= 24*3600;
                rh = (tmp2-tmp1)/3600;
                rm = (tmp2-tmp1)%3600/60;
                rs = (tmp2-tmp1)%60;
        }
                printf("%02d:%02d:%02d\n",rh,rm,rs);

        return 0;
}
