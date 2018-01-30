#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n, sum = 0;
	int a, b,i;
	bool found = false;
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		sum = i;
		int a = i;
		while (a)
		{
			sum += a % 10;
			a /= 10;
		}
		if (sum == n)
		{
			found = true;
			break;
		}
	}
	if (found) printf("%d\n", i);
	else puts("0");

	return 0;
}