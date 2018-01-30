#include <cstdio>

int main() {
	int a, b,c;
	int sum = 0;
	scanf("%d %d", &a,&b);
	scanf("%d", &c);
	sum = a + b;
	if (sum < 2*c) printf("%d\n", sum);
	else printf("%d\n", sum - 2*c);
	return 0;
}