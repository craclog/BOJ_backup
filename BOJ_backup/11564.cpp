#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	long long k, a, b, ret = 0;
	scanf("%lld %lld %lld", &k, &a, &b);
	if (a <= 0 && 0 <= b) ret++;
	if (a == b)
	{
		if (a == 0);
		else if (a % k == 0) ret++;
	}
	else if ((a >= 0 && b >= 0) || (a <= 0 && b <= 0)) 
	{
		if (a < 0)
		{
			a = -a;
			b = -b;
			swap(a, b);
		}
		ret += b / k;
		if( a != 0)
			ret -= (a-1) / k;
	}
	else if ((a >= 0 && b <= 0) || (a <= 0 && b >= 0))
	{
		if (b < 0) b = -b;
		if (a < 0) a = -a;
		ret += b / k;
		ret += a / k;
	}
	
	printf("%lld\n", ret);
	return 0;
}