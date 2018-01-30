#include<stdio.h>

int main(){
    
    int i,n,j;
    int tmp;
    int cnt=0;
    int flag=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        //printf("#%d : ",i+1);
        scanf("%d",&tmp);
        //printf("%d\n",tmp);
        if(tmp==1) cnt--;
        for(j=2;j<tmp;j++){
            if(tmp%j==0)  //소수가 아니면 FLAG!!
                flag=1;
        }
        if(flag==0)
            cnt++;
        flag=0;
    }
    
    printf("%d\n",cnt);
    
    return 0;
}