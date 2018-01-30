#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
struct ss {
	int q, w, e;
};
ss mys[101];
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		mys[i].q = a; mys[i].w = b; mys[i].e = c;
	}
	int ret = 3000000;
	for(int i=0; i<n; i++)
		for(int j=0 ; j<n; j++)
			for (int l = 0; l < n; l++)
			{
				int q = mys[i].q;
				int w = mys[j].w;
				int e = mys[l].e;
				int cnt = 0;
				for (int x = 0; x < n; x++)
				{
					if (q >= mys[x].q
						&& w >= mys[x].w
						&& e >= mys[x].e) cnt++;
				}
				if (cnt >= k) ret = min(ret, q+w+e);
			}
	printf("%d\n", ret);
	return 0;
}