#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int score[1001];
int lose[1001];
double pita[1001];
int n, m;
int main()
{ 
	int t;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d %d", &n, &m);
		fill(lose, lose + 1001, 0);
		fill(score, score + 1001, 0);
		fill(pita, pita + 1001, 0);
		for (int i = 0; i < m; i++)
		{
			int a, b, q, w;
			scanf("%d%d%d%d", &a, &b, &q, &w);
			score[a] += q;
			score[b] += w;
			lose[a] += w;
			lose[b] += q;
		}
		double maxx = 0, minn = 20000;
		for (int i = 1; i <= n; i++)
		{
			if (score[i] == 0 && lose[i] == 0) pita[i] = 0;
			else
			{
				double sq = score[i] * score[i];
				pita[i] = sq / (sq + (lose[i] * lose[i]));
				pita[i] *= 1000;
			}
			maxx = max(maxx, pita[i]);
			minn = min(minn, pita[i]);
		}
		printf("%d\n", (int)maxx);
		printf("%d\n", (int)minn);
	}
	return 0;
}