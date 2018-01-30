#include <stdio.h>
#define MIN(x,y) ( (x)<(y) ? (x):(y))

int distance(int* arr, int* cur, int goal, int len){
    int Ldist = 0,Rdist = 0;
    int Lcur = *cur;
    int Rcur = *cur;
    //Ldist
    while(Lcur != goal){
        Lcur++;
        if(Lcur == len+1)
            Lcur = 1;
        if(arr[Lcur] == -1){}
        else Ldist++;
    }
    while(Rcur != goal){
        Rcur--;
        if(Rcur == 0)
            Rcur = len;
        if(arr[Rcur] == -1){}
        else Rdist++;
    }
    //printf("Ldist : %d, Rdist : %d, Cur : %d\n",Ldist,Rdist,*cur);
    *cur = goal;
    return MIN(Ldist,Rdist);
}

int Pop(int* arr, int* cur, int len){
    int i;
    int res;
    int oldcur = *cur;
    int loofCount = 0;
    res = arr[*cur];
    arr[*cur] = -1;
    
    //puts("==Pop Move==");
    while( arr[*cur] == -1){
        (*cur) ++;
        if(*cur == len+1)
            *cur = 1;
        //printf("%d ",*cur);
        loofCount ++;
        if(loofCount > len)
            break;
    }
    //puts("");
    //puts("============");
    //printf("Poped : %d\n",res);
    //printf("Cur : %d -> %d\n",oldcur,*cur);
    return res;
}

int main(){
    int i,n,m;
    int queue[51] = {0};
    int popOrder[51];
    int count;          //number of elements Remain
    int len;            //Total length;
    int cur = 1;
    int res = 0;
    
    scanf("%d%d",&n,&m);
    len = n;
    for(i=1; i<=n; i++)
        queue[i] = i;
    for(i=0; i<m; i++)
        scanf("%d",&popOrder[i]);
    
    for(i=0; i<m; i++){
        res += distance(queue,&cur,popOrder[i],len);
        Pop(queue,&cur,len);
    }
    printf("%d\n",res);
    
    return 0;
}