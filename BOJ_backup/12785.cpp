#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
using namespace std;
long long a[201][201];
int main() {
	int n, m, k, t,w,h;
	int x, y;
	long long first,second;
	scanf("%d %d", &w, &h);
	scanf("%d %d", &x, &y);
	for (int i = 1; i <= 200; i++)
	{
		a[1][i] = 1;
		a[i][1] = 1;
	}
	for (int i = 2; i <= 200; i++)
	{
		for (int j = 2; j <= 200; j++)
		{
			a[i][j] = (a[i][j - 1] + a[i - 1][j]) % 1000007;
		}
	}
	first = a[x][y] % 1000007;
	w -= x;
	h -= y;
	w++;
	h++;
	second = a[h][w] % 1000007;
	printf("%lld\n", (first * second) % 1000007);
	return 0;
}