//예제는 나오지만 틀림.
#include<stdio.h>
    
int n,i,j;
int tc = 0;
int dp[100001][4];
int cost[100001][4];
int MAX = 999999999;
    
int Min(int a, int b, int c,int d){
    int min = MAX;
    if(min > a)
        min = a;
    if(min > b)
        min = b;
    if(min > c)
        min = c;
    if(min > d)
        min = d;
    
    return min;
}

// 현재n 층, 자기 위치: posit 를 구하는 함수
int getdp(int now,int position){
    
    if(dp[now][position] != 0)
        return dp[now][position];
    if(now == 2){
        if(position == 1)
            return dp[now][position] = dp[1][2] + cost[now][position];
        else if(position == 2)
            return dp[now][position] = Min(dp[1][2],getdp(now,1),dp[1][3],MAX) + cost[now][position];
        else
            return dp[now][position] = Min(dp[1][2],dp[1][3],getdp(now,2),MAX) + cost[now][position];
    }
    
    if(position == 1)
        return dp[now][1] = Min(getdp(now-1,1),getdp(now-1,2),MAX,MAX) + cost[now][1];
    else if(position == 2)
        return dp[now][2] = Min(getdp(now-1,1),getdp(now-1,2),getdp(now-1,3),getdp(now,1)) + cost[now][2];
    else
        return dp[now][3] = Min(MAX,getdp(now-1,2),getdp(now-1,3),getdp(now,2)) + cost[now][3];
}



int main(){

    
    while(1){
        
        for(i=0;i<100001;i++)
            for(j=0;j<4;j++){
                dp[i][j] = 0;
                cost[i][j] = 0;
            }
        
        tc++;
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=1;i<n+1;i++)
            scanf("%d %d %d",&cost[i][1],&cost[i][2],&cost[i][3]);
        
        dp[1][1] = cost[1][1];
        dp[1][2] = cost[1][2];
        dp[1][3] = dp[1][2] + cost[1][3];
        
        
        printf("%d. %d\n",tc,getdp(n,2) );
//      printf("\n %d %d %d",getdp(2,1),getdp(2,2),getdp(2,3));
    }

    return 0;
}