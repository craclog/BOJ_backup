#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		int m, n, x, y;
		int ret;
		scanf("%d%d%d%d", &m, &n, &x, &y);
		int valid = 0;
		for (int i = 0; i <= n; i++)
		{
			ret = m*i + x;
			if (ret % n == 0 && n == y)
			{
				valid = 1;
				break;
			}
			else if (ret % n == y)
			{
				valid = 1;
				break;
			}
		}
		if( valid ) printf("%d\n", ret);
		else puts("-1");
	}
	return 0;
}
