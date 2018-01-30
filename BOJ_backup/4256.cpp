#include <cstdio>
#include <algorithm>
#include <functional>
#include <vector>
#include <deque>
#include <queue>
#include <set>
using namespace std;
typedef long long ll;
//후위순회하자
//lu ru
//ld rd
void sol(deque<int> a, deque<int> b) {
	deque<int> lu,ru,ld,rd;
	int i;
	int root, left, right;
	if (a.size() == 0) return ;
	if (a.size() == 1)
	{
		printf("%d ", a[0]);
		return ;
	}
	for (i = 0; i < a.size(); i++)
	{
		lu.push_back(a[i]);
		ld.push_back(b[i]);
		if (a[0] == b[i]) break;
	}
	for (i = i + 1; i < a.size(); i++)
	{
		ru.push_back(a[i]);
		rd.push_back(b[i]);
	}
	root = lu.front();
	lu.pop_front(); ld.pop_back();
	//ru.pop_front(); rd.pop_back();
	sol(lu, ld);
	sol(ru, rd);
	printf("%d ", root);
}

int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		int n, i;
		deque<int> a,b;
		deque<int> lu, ru, ld, rd;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			int tmp;
			scanf("%d", &tmp);
			a.push_back(tmp);
		}
		for (int i = 0; i < n; i++)
		{
			int tmp;
			scanf("%d", &tmp);
			b.push_back(tmp);
		}
		
		sol(a, b);
		puts("");

	}

	return 0;
}
