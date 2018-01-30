#include <cstdio>
#include <vector>
#include <string>
#include <string.h>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

int t,n;
int a[1001][4];

int main() {
	scanf("%d", &t);
	while (t--)
	{
		int res = 0;
		
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
		for (int i = 0; i < n; i++)
		{
			int maxx = -1000000;
			for (int j = 0; j < 3; j++)
			{
				maxx = max(maxx, a[i][j]);
			}
			if (maxx > 0) res += maxx;
		}
		printf("%d\n", res);
	
	}
	
	return 0;
}