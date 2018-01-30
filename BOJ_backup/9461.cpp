#include <cstdio>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
using namespace std;

typedef long long ll;
long long odd[104];
ll even[105];
int main() {
	int tc;
	scanf("%d", &tc);
	odd[1] = 1; odd[2] = 1; odd[3] = 2;
	even[1] = 1; even[2] = 2; even[3] = 3;
	for (int i = 4; i < 100; i++)
	{
		odd[i] = even[i - 1] + even[i - 3];
		even[i] = odd[i] + odd[i - 2];
	}
	while (tc--)
	{
		ll n;
		scanf("%lld", &n);
		if (n % 2 == 1) 
		{
			n = (n / 2) + 1;
			printf("%lld\n", odd[n]);
		}
		else 
		{
			n /= 2;
			printf("%lld\n", even[n]);
		}
		
	}

	return 0;
}