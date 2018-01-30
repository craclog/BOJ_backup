#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
#define mmod 1000000007
typedef long long ll;

ll dp[5001];
int main() {
	int t,n;
	scanf("%d", &t);
	dp[0] = 1;
	dp[2] = 1;
	for (int i = 4; i <= 5000; i += 2)
	{
		int tmp = i;
		ll sum = 0;
		while (tmp)
		{
			tmp -= 2;
			sum = (sum + ((dp[tmp] * dp[i - 2 - tmp])%mmod))%mmod;
		}
		dp[i] = sum % mmod;
	}
	while (t--)
	{
		scanf("%d", &n);
		if (n % 2 == 1) puts("0");
		else printf("%lld\n", dp[n]);
	}
	
	return 0;
}