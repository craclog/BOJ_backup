#include <cstdio>
#include <algorithm>
#include <deque>
#include <string>
#include <vector>
using namespace std;
int a[1000001];
int edge[21];
int main() {
	int k;
	scanf("%d", &k);
	edge[0] = 1;
	int ori = k;
	for (int i = 1; i < 21; i++)
		edge[i] = edge[i - 1] * 2;
	for (int i = 2; i <= k; i++)
	{
		if (k % i == 0)
		{
			a[i]++;
			k /= i;
			i = 1;
			continue;
		}
	}
	int cnt = 0;
	for (int i = 0; i <= ori; i++)
	{
		cnt += a[i];
	}
	int i;
	for (i = 0; i < 21; i++)
	{
		if (edge[i] >= cnt) break;
	}
	printf("%d\n", i);
	return 0;
}