#include<stdio.h>

int main(){
    int i,j;
    int hei[9];
    int sum=0;
    int tmp;
    int point1=0,point2=0;
    
    for(i=0;i<9;i++){
        scanf("%d",&hei[i]);
        sum+=hei[i];
    }
    tmp = sum;
    //printf("sum : %d\n",sum);
    
    for(i=0;i<9;i++){
        tmp = sum;
        tmp -= hei[i];
        for(j=i;j<9;j++){
            if(i==j) continue;
            tmp -= hei[j];
            if(tmp==100){
                point1 = i;
                point2 = j;
                //printf("1,2 : %d,%d\n",point1,point2);
                //printf("tmp : %d\n",tmp);
            }
            tmp+= hei[j];
        }
    }
    
    hei[point1]=0;
    hei[point2]=0;
    
    for(i=0;i<9;i++){
        for(j=i;j<9;j++){
            if(hei[i]>hei[j]){
                tmp = hei[i];
                hei[i] = hei[j];
                hei[j] = tmp;
            }
        }
    }
    
    for(i=2;i<9;i++){
        printf("%d\n",hei[i]);
    }
    
    return 0;
}