#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int rmax[501];
int lmax[501];
int a[501];
int main() {
	int h,w;
	int ret = 0;
	scanf("%d %d", &h, &w);
	for (int i = 0; i < w; i++)
		scanf("%d", a + i);
	lmax[0] = a[0];
	rmax[w - 1] = a[w - 1];
	for (int i = 1; i < w - 1; i++)
	{
		lmax[i] = max(lmax[i - 1], a[i]);
		rmax[w - i - 1] = max(rmax[w - i], a[w-i-1]);
	}
	for (int i = 0; i < w; i++)
	{
		ret += max(min(lmax[i],rmax[i]) - a[i], 0);
	}
	printf("%d\n", ret);
	return 0;
}