#include <cstdio>
#include <vector>
#include <set>
#include <functional>
using namespace std;
bool PrimeArray[5000001];
set<int, greater<int>> f, s;
void Eratos(int n)
{
	if (n <= 1) return;
	PrimeArray[0] = false;
	PrimeArray[1] = false;
	for (int i = 2; i <= n; i++) PrimeArray[i] = true;
	for (int i = 2; (i*i) <= n; i++)
	{
		if (PrimeArray[i])
			for (int j = i*i; j <= n; j += i) PrimeArray[j] = false;
	}
	return;
}
int main() {
	int n;
	scanf("%d", &n);
	Eratos(5000000);
	long long sA = 0, sB = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if (PrimeArray[a])
		{
			if (f.find(a) == f.end() && s.find(a) == s.end())
				f.insert(a);
			else sA -= 1000;
		}
		else
		{
			if (s.size() < 3) sB += 1000;
			else
			{
				int tmp1, tmp2;
				tmp1 = *(s.begin());
				s.erase(s.begin());
				tmp2 = *(s.begin());
				s.erase(s.begin());
				sB += *(s.begin());
				s.insert(tmp1);
				s.insert(tmp2);
			}
		}
		if (PrimeArray[b])
		{
			if (f.find(b) == f.end() && s.find(b) == s.end())
				s.insert(b);
			else sB -= 1000;
		}
		else
		{
			if (f.size() < 3) sA += 1000;
			else
			{
				int tmp1, tmp2;
				tmp1 = *(f.begin());
				f.erase(f.begin());
				tmp2 = *(f.begin());
				f.erase(f.begin());
				sA += *(f.begin());
				f.insert(tmp1);
				f.insert(tmp2);
			}
		}
	}

	if (sA > sB) puts("소수의 신 갓대웅");
	else if (sA < sB) puts("소수 마스터 갓규성");
	else puts("우열을 가릴 수 없음");
	return 0;
}