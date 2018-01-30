#include <cstdio>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
ull gcd(ull a, ull b) {
	ull tmp;
	while (b)
	{
		tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;
}

int main() {
	ull a, b, ret;
	scanf("%lld %lld", &a, &b);
	ret = gcd(b, a);
	for (ull i = 0; i < ret; i++)
		printf("1");
	puts("");

	return 0;
}