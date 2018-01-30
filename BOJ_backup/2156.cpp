#include <cstdio>
#define max2(a,b)  (a) > (b) ? (a) : (b)
int arr[10001];
int dp[10001][3] = { 0, };
int visited[10001] = { 0, };
int max3(int a, int b, int c) {
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	return max;
}
int getdp(int n) {
	if( visited[n] ) return max3(dp[n][0], dp[n][1], dp[n][2]);
	visited[n] = 1;
	if( n > 4 && !visited[n - 1]) getdp(n - 1);
	if (n > 5 && !visited[n - 2]) getdp(n - 2);
	if (n > 6 && !visited[n - 3]) getdp(n - 3);
	//case0 
	dp[n][0] = max3(dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]);
	//case 1
	dp[n][1] = arr[n] + arr[n-1] + max3(dp[n - 3][0], dp[n - 3][1], dp[n - 3][2]);
	//case 2
	dp[n][2] = arr[n] + max3(dp[n - 2][0], dp[n - 2][1], dp[n - 2][2]);
	return max3(dp[n][0], dp[n][1], dp[n][2]);
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	dp[1][0] = 0;
	dp[1][1] = arr[1];
	dp[1][2] = arr[1];
	visited[1] = 1;
	if (n >= 2) {
		dp[2][0] = arr[1];
		dp[2][1] = arr[2] + arr[1];
		dp[2][2] = arr[2];
		visited[2] = 1;
		if (n >= 3) {
			dp[3][0] = arr[1] + arr[2];
			dp[3][1] = arr[3] + arr[2];
			dp[3][2] = arr[3] + arr[1];
			visited[3] = 1;
		}
	}
	printf("%d\n", getdp(n));
	return 0;
}
