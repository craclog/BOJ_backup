#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int a[1001];
int dp[1001][4];
int main() {
	int n;
	int st = -1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", a + i);
		if (st == -1 && a[i] == 0) st = i;
	}
	int ret = 1;
	int last = 0;
	for (int i = st; i < n; i++)
	{
		if (last == 0 && a[i] == 1)
		{
			ret++;
			last = 1;
		}
		else if (last == 1 && a[i] == 2)
		{
			ret++;
			last = 2;
		}
		else if (last == 2 && a[i] == 0)
		{
			ret++;
			last = 0;
		}
	}
	printf("%d\n", ret);
	
	
	return 0;
}