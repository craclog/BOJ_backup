#include <cstdio>
typedef long long ll;
ll check[1001][1001];
ll a[1001][1001];
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%lld", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		ll maxx = -1;
		ll maxin;
		for (int j = 0; j < m; j++)
		{
			if (maxx < a[i][j])
			{
				maxin = j;
				maxx = a[i][j];
			}
		}
		check[i][maxin] = 1;
	}
	for (int j = 0; j < m; j++)
	{
		ll maxx = -1;
		ll maxin;
		for (int i = 0; i < n; i++)
		{
			if (maxx < a[i][j])
			{
				maxin = i;
				maxx = a[i][j];
			}
		}
		check[maxin][j] = 1;
	}
	ll sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (check[i][j] == 0)
			{
				sum += a[i][j];
			}
		}
	}
	printf("%lld\n", sum);



	return 0;
}