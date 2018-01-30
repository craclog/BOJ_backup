#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
using namespace std;

deque<int> X[100001];
vector<pair<int, int>> res;
int target[11];
int main() {
	int t;
	scanf("%d", &t);
	while (t--)
	{
		res.clear();
		for (int i = 0; i < 100001; i++)
			X[i].clear();
		fill(target, target + 11, 0);
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			int a, b;
			scanf("%d %d", &a, &b);
			X[a].push_back(b);
		}
		int m;
		scanf("%d", &m);
		for (int i = 0; i < m; i++)
			scanf("%d", target + i);
		for (int i = 0; i < 100001; i++)
			if( X[i].size() != 0) sort(X[i].begin(), X[i].end());
		int curX = -1;
		int lastY = 0;
		while (1)
		{
			curX++;
			if (X[curX].size() == 0) continue;
			if (X[curX][0] == lastY)
			{
				while (X[curX].size() != 0)
				{
					int tmp = X[curX].front();
					X[curX].pop_front();
					res.push_back(make_pair(curX,tmp)); 
					lastY = tmp;
				}
			}
			else
			{
				while (X[curX].size() != 0)
				{
					int tmp = X[curX].back();
					X[curX].pop_back();
					res.push_back(make_pair(curX, tmp));
					lastY = tmp;
				}
			}
			if (res.size() == n) break;
		}
		for (int i = 0; i < m; i++)
		{
			printf("%d %d\n", res[target[i] - 1].first, res[target[i] - 1].second);
		}
	}
	return 0;
}