#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

ll x[101], y[101];
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%lld %lld", x + i, y + i);
	ll minn = 1e10;
	ll mina, minb;
	for(ll i=1; i<101; i++)
		for (ll j = 1; j < 101; j++)
		{
			ll rss = 0;
			for (ll k = 0; k < n; k++)
				rss += (y[k] - i*x[k] - j)*(y[k] - i*x[k] - j);
			if (minn > rss) 
			{
				mina = i;
				minb = j;
				minn = rss;
			}
		}
	printf("%lld %lld\n", mina, minb);
	return 0;
}