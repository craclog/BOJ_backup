#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
int a[1001];
int main() {
	int n,m,k;
	scanf("%d", &n);
	scanf("%d %d", &m, &k);
	for (int i = 0; i < n; i++)
		scanf("%d", a + i);
	sort(a, a + n, greater<int>());
	int cnt = 0;
	int sum = 0;
	int need = m*k;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		cnt++;
		if (need <= sum) break;
	}
	if (need > sum) puts("STRESS");
	else printf("%d\n", cnt);

	
	return 0;
}