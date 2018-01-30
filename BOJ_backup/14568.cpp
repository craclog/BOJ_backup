#include <cstdio>
int main() {
	int n, tmpn;
	int a, b, c;
	int cnt = 0;
	scanf("%d", &n);
	
	for (int i = 1; i < n - 1; i++) {
		tmpn = n;
		if (i % 2 == 1) continue;
		c = i;
		tmpn -= i;
		if (tmpn >= 4) {
			cnt += tmpn/2 - 1;
		}
	}
	printf("%d\n", cnt);
	return 0;
}