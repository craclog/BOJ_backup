#include <cstdio>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
using namespace std;

typedef long long ll;
int a[101][101];
int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		int m, n;
		int sum = 0;
		scanf("%d %d", &m, &n);
		for(int i=0; i<m; i++)
			for (int j = 0; j < n; j++)
			{
				scanf("%d", &a[i][j]);

			}
		for (int i = 0; i < n; i++)
		{
			int bot = 0;
			for (int j = m-1; j >= 0; j--)
			{
				if (a[j][i] == 1)
				{
					sum += m-1-j - bot;
					bot++;
				}

			}
		}

		printf("%d\n", sum);
	}

	return 0;
}