#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;

char a[1000 + 1];
char b[1000 + 1];
int dp[1001][1001] = { 0 };
int lcs(int m, int n)
{
	if (dp[m][n] != -1) return dp[m][n];
	if (m == 0 || n == 0)
		return dp[m][n] = 0;
	if (a[m - 1] == b[n - 1])
		return dp[m][n] = 1 + lcs(m - 1, n - 1);
	else
		return dp[m][n] = max(lcs(m, n - 1), lcs(m - 1, n));
}
int main() {
	
	scanf("%s %s", a, b);
	int len1 = strlen(a);
	int len2 = strlen(b);
	for (int i = 0; i < 1001; i++)
		fill(dp[i], dp[i] + 1001, -1);
	printf("%d\n", lcs(len1,len2));
	return 0;
}