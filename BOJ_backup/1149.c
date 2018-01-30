//DP 문제. 예제는 나오지만 백준틀림.
#include<stdio.h>
    
int n;
int i,j;
int dp[1003][3];
int cost[1003][3];
// 0: red, 1:green, 2:blue

int Min3(int a,int b, int c){
    int res = a;
    if(res > b)
        res = b;
    if(res > c)
        res = c;
    return res;
}
int Min2(int a,int b){
    return a<b ? a:b;
}
//now까지의 해당color일때의 최소값
int getdp(int now,int color){
    if(dp[now][color] > 0)
        return dp[now][color];
    if(now == 0)
        return 0;
        
    if(color == 0)
        return dp[now][color] = Min2(getdp(now-1,1),getdp(now-1,2)) + cost[now][color];
    else if(color == 1)
        return dp[now][color] = Min2(getdp(now-1,0),getdp(now-1,2)) + cost[now][color];
    else
        return dp[now][color] = Min2(getdp(now-1,0),getdp(now-1,1)) + cost[now][color];

}


int main(){

    int res;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&cost[i][0],&cost[i][1],&cost[i][2]);
    }
    res = Min3(getdp(n,0),getdp(n,1),getdp(n,2));
    printf("%d\n",res);
    
    return 0;
}