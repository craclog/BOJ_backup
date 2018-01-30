#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
typedef long long ll;

int a[100001];
int main() {
	int n;
	ll sum = 0;
	ll ret = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", a + i);
		sum += a[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum -= a[i];
		ret += a[i] * sum;
	}
	printf("%lld\n", ret);
		




	return 0;
}