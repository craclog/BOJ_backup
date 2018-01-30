#include <cstdio>
#include <vector>
#include <string>
#include <string.h>
#include <queue>
#include <map>
#include <set>
#include <deque>
#include <algorithm>
using namespace std;

int t,n;
vector<int> a;
set<int> s;
int main() {
	scanf("%d", &t);
	while (t--)
	{
		int res = 0;
		a.clear();
		s.clear();
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			int tmp;
			scanf("%d", &tmp);
			a.push_back(tmp);
			s.insert(tmp);
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < a.size(); i++)
			for (int j = i + 1; j < a.size(); j++)
			{
				int gap = a[j] - a[i];
				auto it = s.find(a[j] + gap);
				if (it != s.end()) res++;
			}
		printf("%d\n", res);

	}
	
	return 0;
}