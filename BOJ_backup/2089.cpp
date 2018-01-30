#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;
ll dp[34], bound[34];
vector<ll> v;
int sol(ll n) {
	ll ret;
	if (n == 0) return 0;
	else if (n > 0)
	{
		for (int i = 0; i < 34; i++)
			if (i % 2 == 0 && n <= bound[i])
			{
				ret = n - dp[i];
				v.push_back(i);
				break;
			}
		sol(ret);
	}
	else
	{
		for (int i = 0; i < 34; i++)
			if (i % 2 == 1 && n >= bound[i])
			{
				ret = n + dp[i];
				v.push_back(i);
				break;
			}
		sol(ret);
	}
	return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	dp[0] = 1;
	for (int i = 1; i < 34; i++)
		dp[i] = dp[i - 1] * 2;
	bound[0] = 1;
	bound[1] = -2;
	for (int i = 2; i < 34; i++)
	{
		if( i % 2 == 0)
			bound[i] = bound[i - 2] + dp[i];
		else bound[i] = bound[i - 2] - dp[i];
	}
	sol(n);
	if (v.size() == 0) { puts("0"); return 0;}
	int cur = 0;
	for (int i = v[0]; i >= 0; --i)
	{
		if (cur == v.size()) printf("0");
		else if (v[cur] == i) { printf("1"); cur++; }
		else printf("0");
	}
	puts("");
	return 0;
}