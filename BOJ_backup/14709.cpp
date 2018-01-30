#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
using namespace std;
int adj[6][6];
int main() {	
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		adj[a][b] = 1;
		adj[b][a] = 1;
	}
	int flag = 1;
	for (int i = 1; i < 6; i++)
	{
		if (adj[2][i] != 0) flag = 0;
		if (adj[5][i] != 0) flag = 0;
	}
	if (adj[3][4] == 0) flag = 0;
	if (adj[1][3] == 0 || adj[1][4] == 0) flag = 0;
	if (flag == 1) puts("Wa-pa-pa-pa-pa-pa-pow!");
	else puts("Woof-meow-tweet-squeek");
	return 0;
}