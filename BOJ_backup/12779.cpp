#include <cstdio>
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <functional>
#include <stack>
using namespace std;
typedef unsigned long long ull;

ull gcd(ull a, ull b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	ull k;
	for (k = 0; ((a | b) & 1) == 0; ++k)
	{
		a >>= 1;
		b >>= 1;
	}
	while ((a & 1) == 0)
		a >>= 1;
	do
	{
		while ((b & 1) == 0)
			b >>= 1;
		if (a > b)
			swap(a, b);  

		b = (b - a);
	} while (b != 0);
	return a << k;
}
int main() {
	unsigned long long a,b;
	unsigned long long ch, pa;
	ull s = -1, e = -1;
	scanf("%llu %llu", &a, &b);
	pa = b - a;
	double tmp = sqrt(a);
	s = (ull)tmp + 1;
	tmp = sqrt(b);
	e = (ull)tmp;
	ch = e - s + 1;
	if (ch < 0) ch = 0;
	ull gcdd = gcd(ch, pa);
	ch /= gcdd;
	pa /= gcdd;
	if (ch == 0) puts("0");
	else printf("%llu/%llu", ch, pa);
	
	return 0;
}
