#include <cstdio>
#include <algorithm>
using namespace std;

long long d[1001][10] = { 0, };
long long sol(int n, int front) {
	long long ret = 0;
	if (d[n][front] != 0) return d[n][front];
	if (n == 1) return d[n][front] = 1;
	for (int i = front; i < 10; i++)
		d[n][front] += sol(n - 1, i);
	d[n][front] %= 10007;
	return d[n][front];
}
int main() {
	int n;
	long long ret = 0;
	scanf("%d", &n);
	if (n == 1) { puts("10"); return 0; };
	for (int i = 0; i < 10; i++)
		ret += sol(n, i);
	printf("%lld\n", ret % 10007);
	return 0;
}