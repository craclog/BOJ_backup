#include <cstdio>
const int N = 1000001;
long long t[4 * N];
long long ret = 0;
/*
* n : 현재 위치
* s,e : 구간의 시작과 끝 start,end
* p : update 할 위치 position
* v : update 할 값 value
*/
void upd(int n, int s, int e, int p, long long v) {
	if (p < s || p > e) return;
	if (s == e) t[n] = v;
	else
	{
		upd(2 * n, s, (s + e) / 2, p, v);
		upd(2 * n + 1, (s + e) / 2 + 1, e, p, v);
		t[n] = (t[2 * n] * t[2 * n + 1]) % 1000000007;
	}
}
long long summ(int n, int s, int e, int l, int r) {
	if (l > e || r < s) return 0;
	if (l <= s && e <= r) return t[n];
	return summ(2 * n, s, (s + e) / 2, l, r) + summ(2 * n + 1, (s + e) / 2 + 1, e, l, r);
}

long long mul(int n, int s, int e, int l, int r) {
	if (l > e || r < s) return 1;
	if (l <= s && e <= r) return t[n];
	return (mul(2 * n, s, (s + e) / 2, l, r) * mul(2 * n + 1, (s + e) / 2 + 1, e, l, r)) % 1000000007;
}


int main()
{
	int n, m, k;
	long long tmp;
	scanf("%d %d %d", &n, &m, &k);
	
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &tmp);
		upd(1, 1, n, i, tmp);
	}
	for (int i = 0; i < m + k; i++)
	{
		long long flag, a, b;
		scanf("%lld %lld %lld", &flag, &a, &b);
		if (flag == 1) upd(1, 1, n, a, b);
		else if (flag == 2)	printf("%lld\n", mul(1, 1, n, a, b));
	}
	return 0;
}