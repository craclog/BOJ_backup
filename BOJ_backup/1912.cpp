#include <cstdio>
#include <algorithm>
using namespace std;
int a[100001];
int L_dp[100001];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", a + i);
	L_dp[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		int sum = L_dp[i - 1] + a[i];
		if (sum > a[i]) L_dp[i] = sum;
		else L_dp[i] = a[i];
	}
	int maxx = a[0];
	for (int i = 0; i < n; i++)
		maxx = max(maxx, L_dp[i]);
	printf("%d\n", maxx);
	
	return 0;
}