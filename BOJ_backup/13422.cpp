#include <cstdio>
#include <vector>
#include <string>
#include <string.h>
#include <queue>
#include <map>
#include <deque>
#include <algorithm>
using namespace std;

int t,n,m,k;
long long a[200001];
int main() {
	scanf("%d", &t);
	while (t--)
	{
		long long sum = 0;
		int res = 0;
		scanf("%d %d %d", &n,&m,&k);
		for (int i = 0; i < n; i++)
			scanf("%lld", a + i);
		if (m == n)
		{
			for (int i = 0; i < n; i++)
				sum += a[i];
			if (sum < k) res++;
			printf("%d\n", res);
			continue;
		}
		for (int i = 0; i < m - 1; i++)
		{
			a[n + i] = a[i];
		}
		n += (m - 1);
		for (int i = 0; i < n; i++)
		{
			if (i < m)
			{
				sum += a[i];
				if (i == m - 1 && sum < k) res++;
			}			
			else
			{
				sum -= a[i - m];
				sum += a[i];
				if (sum < k) res++;
			}
		}
		printf("%d\n", res);
	}
	
	return 0;
}