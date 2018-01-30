#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int dong[9][104];
int resd;
char name[9][15] = { "PROBRAIN","GROW","ARGOS","ADMIN","ANT","MOTION","SPG","COMON","ALMIGHTY" };
int main() {
	int n;
	int maxx = 0;
	scanf("%d", &n);
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &dong[i][j]);
			if (dong[i][j] > maxx)
			{
				maxx = dong[i][j];
				resd = i;
			}
		}
	}
	printf("%s\n", name[resd]);
	return 0;
}