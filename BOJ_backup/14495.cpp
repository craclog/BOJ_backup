#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

long long dp[120] = { 0, };

long long getdp(int i) {
	if (i == 1 || i==2 || i==3)
		return 1;
	if (dp[i] != 0) {
		return dp[i];
	}
	return dp[i] = getdp(i-1) + getdp(i-3);
}
int main() {
	int n;
	dp[1] = dp[2] = dp[3] = 1;
	long long ret;
	scanf("%d", &n);
	ret = getdp(n);
	printf("%lld\n", ret);

	return 0;
}