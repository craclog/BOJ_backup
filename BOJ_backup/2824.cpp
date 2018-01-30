#include <cstdio>
#include <algorithm>
#include <math.h>
#include <vector>
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

int a[1001];
int b[1001];
vector<int> va;
vector<int> vb;
int main() {
	int n1,n2;
	int flag = 0;
	int tmp;
	long long ret = 1;
	scanf("%d", &n1);
	for (int i = 0; i < n1; i++)
	{
		scanf("%d", &tmp);
		int sq = sqrt(tmp);
		for (int j = 2; j <= sq; j++)
		{
			while(tmp % j == 0)
			{
				va.push_back(j);
				tmp /= j;
			}
		}
		if (tmp != 1) va.push_back(tmp);
	}
	scanf("%d", &n2);
	for (int i = 0; i < n2; i++)
	{
		scanf("%d", &tmp);
		int sq = sqrt(tmp);
		for (int j = 2; j <= sq; j++)
		{
			while (tmp % j == 0)
			{
				vb.push_back(j);
				tmp /= j;
			}
		}
		if (tmp != 1) vb.push_back(tmp);
	}
	sort(va.begin(), va.end());
	sort(vb.begin(), vb.end());
	int maxsize = max(va.size(), vb.size());
	int aindex = 0, bindex = 0;
	while (aindex != va.size() && bindex != vb.size())
	{
		if (va[aindex] == vb[bindex])
		{
			if (ret >= 1000000000 / va[aindex])
			{
				flag = 1;
			}
			ret = (ret * va[aindex]) % 1000000000;
			aindex++;
			bindex++;
		}
		else if (va[aindex] > vb[bindex])
		{
			bindex++;
		}
		else if (va[aindex] < vb[bindex])
		{
			aindex++;
		}
	}
	if (flag)
	{
		printf("%09lld\n", ret);
	}
	else printf("%lld\n", ret);
	return 0;
}
