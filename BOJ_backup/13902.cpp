#include <cstdio>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;


int a[1001];
vector<int> v;
int dp[10001];
int c[10001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0; i<m; i++)
	{
		scanf("%d",a+i);	
		c[ a[i] ] = 1;
	}
	for(int i =0; i<m; i++)
		for(int j=i+1; j<m; j++)
			if( a[i] + a[j] <= n) c[ a[i] + a[j] ] = 1;
	for(int i=1; i<10001; i++)
		if( c[i] == 1 ) v.push_back(i);
	for(int i=1; i<10001; i++)
		dp[i] = 10001;
	dp[0] = 0;
	for(int i=0;i<v.size();i++)
		for(int j=0; j <= 10000; j++)
		{
			if(j + v[i] <= n)
			{
				dp[j + v[i]] = min(dp[j + v[i]], dp[j] + 1);
			}
			
		}
	if( dp[n] >= 10001) puts("-1");
	else printf("%d\n", dp[n]);

	return 0;
}