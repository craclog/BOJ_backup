#include <cstdio>
#include <algorithm>
using namespace std;

long long d[1001] = { 0, };

long long sol(int n) {
	if (d[n] != 0)	return d[n];
	if (n == 1) return d[n] = 1;
	if (n == 2) return d[n] = 2;
	if (n == 3) return d[n] = 3;
	return d[n] = (2*sol(n - 2) + sol(n - 3)) % 10007;
}

int main() {
	int n;
	
	scanf("%d", &n);
	printf("%lld\n", sol(n) % 10007);
	
	return 0;
}