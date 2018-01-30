#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int mm[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
int main() {
	int n;
	scanf("%d", &n);
	int y = 2014, m = 4, d = 2;
	for (int i = 1; i < n; i++)
	{
		d++;
		if (m == 2)
		{
			if (y == 2016)
			{
				y = y;
			}
			if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
			{
				if (d == 30) m++, d = 1;
			}
			else if (d == 29) m++, d = 1;
		}
		else if (d == mm[m] + 1) m++, d = 1;
		if (m == 13) y++, m = 1;
	}
	printf("%04d-%02d-%02d\n", y, m, d);
	return 0;
}