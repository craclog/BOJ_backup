#include <cstdio>
#include <algorithm>
using namespace std;

int dp[1001];
int a[1001];
int n;
int solv(int index) {
	int ret = 1;
	if (dp[index] != -1) return dp[index];
	for (int i = index - 1; i >= 0; i--)
	{
		if (a[i] < a[index]) ret = max(ret, solv(i) + 1);
	}
	dp[index] = ret;
	return dp[index];
}

int main() {
	scanf("%d", &n);
	fill(dp, dp + 1001, -1);
	for (int i = 0; i < n; i++)
		scanf("%d", a + i);
	//답이 마지막 원소를 포함하지 않은 수열 일 수도 있다.
	//따라서 맨마지막 원소를 무조건 포함하게끔 수열을 만들고
	a[n] = 1001;
	// 답에서 하나 빼준다.
	printf("%d\n", solv(n)-1);



	return 0;
}