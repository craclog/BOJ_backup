#include<stdio.h>

int main(){
    int i,j,m,n,sum=0,min=10001;
    int sqr[105];
    
    for(i=1;i<=100;i++){
        sqr[i] = i*i;
    }
    
    scanf("%d %d",&m,&n);
    
    for(i=m;i<=n;i++){
        for(j=1;j<=100;j++){
            if(i==sqr[j]){
                sum+=sqr[j];
                if(sqr[j]<min){
                    min = sqr[j];
                }
            }
        }
    }
    if(sum==0){
        printf("-1\n");
        return 0;
    }
        
    
    printf("%d\n",sum);
    printf("%d\n",min);
    
    return 0;
}