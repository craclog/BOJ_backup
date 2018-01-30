#include <cstdio>
#include <algorithm>
using namespace std;

long long nd[100] = { 0, };
long long nsol(int n) {
	if (nd[n] != 0) return nd[n];
	if (n == 1) return nd[n] = 1;
	if (n == 2) return nd[n] = 1;
	if (n == 3) return nd[n] = 2;
	return nd[n] = nsol(n - 1) + nsol(n - 2);
}
int main() {
	int n;
	scanf("%d", &n);
	nd[0] = 1;
	printf("%lld\n",nsol(n));	
	return 0;
}