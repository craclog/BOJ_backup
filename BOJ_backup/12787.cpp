#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
using namespace std;
unsigned long long sum = 0;
unsigned long long gop[10];
unsigned long long res[10];
unsigned long long input, a[10];

int main() {
	int n, m, k, t;
	scanf("%d", &t);
	gop[0] = 1;
	for (int i = 1; i < 8; i++)
		gop[i] = gop[i - 1] * 256;
	while (t--)
	{
		scanf("%d", &m);
		sum = 0;
		if (m == 1)
		{
			for (int i = 0; i < 8; i++)
				scanf("%llu.", a + i);
			for (int i = 7; i >= 0; i--)
			{
				sum += a[i] * gop[7 - i];
			}
			printf("%llu\n", sum);
		}
		else
		{
			scanf("%llu", &input);
			for (int i = 0; i < 8; i++)
			{
				res[i] = input % 256;
				input -= res[i];
				input /= 256;
			}
			for (int i = 7; i > 0; i--)
			{
				printf("%llu.", res[i]);
			}
			printf("%llu\n", res[0]);
		}
	}
	return 0;
}