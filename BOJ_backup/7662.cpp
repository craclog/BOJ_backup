#include <cstdio>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>
using namespace std;
typedef long long ll;

multiset<int> ms;
int main() {
	int tc;
	scanf("%d", &tc);
	getchar();
	while (tc--)
	{
		ms.clear();
		int k, a;
		char ope, c;
		int cnt = 0;
		scanf("%d", &k);
		getchar();
		for (int i = 0; i < k; i++)
		{
			scanf("%c", &ope);
			getchar();
			scanf("%d", &a);
			getchar();
			if (ope == 'I') ms.insert(a);
			else if (ope == 'D')
			{
				if (ms.size() == 0) continue;
				else if (a == 1) ms.erase(--ms.end());
				else ms.erase(ms.begin());
			}
		}
		if (ms.size() == 0) puts("EMPTY");
		else
		{
			multiset<int>::iterator maxx, minn;
			maxx = --ms.end();
			minn = ms.begin();
			printf("%d %d\n", *maxx, *minn);
		}
	}

	return 0;
}
