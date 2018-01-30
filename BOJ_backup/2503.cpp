#include <cstdio>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

int a[101];
int b[101], s[101];
int poss[1000];
bool ott(int a) {
	int tmp = a % 10;
	a /= 10;
	int tmp2 = a % 10;
	a /= 10;
	if (tmp == tmp2 || tmp == a || a == tmp2) return false;
	else if (tmp == 0 || tmp2 == 0 || a == 0) return false;
	return true;
}
bool cmp(int num, int i) {
	int cntn[10],cntt[10], tmp = a[i];
	fill(cntn, cntn + 10, 0);
	fill(cntt, cntt + 10, 0);
	int ball = 0, strike = 0;
	while (num != 0)
	{
		if (num % 10 == tmp % 10)
		{
			strike++;
		}
		else 
		{
			cntn[num % 10]++;
			cntt[tmp % 10]++;
		}
		num /= 10;
		tmp /= 10;
	}
	for (int j = 1; j < 10; j++)
		if (cntn[j] == cntt[j] && cntn[j] > 0) ball++;
	if (strike == s[i] && ball == b[i]) return true;
	return false;
}
int main() {
	int n;
	int res = 0;
	fill(poss, poss + 1000, 1);
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", a + i);
		scanf("%d %d", s+i, b+i);
	}
	for (int i = 102; i < 1000; i++)
	{
		if (!ott(i))
		{
			poss[i] = 0;
			continue;
		}
		else
		for (int j = 0; j < n; j++)
		{
			if (!cmp(i, j))
			{
				poss[i] = 0;
			}
		}
	}
	for (int i = 102; i < 1000; i++)
		if (poss[i] == 1)
		{
			res++;
		}
	printf("%d\n", res);
}