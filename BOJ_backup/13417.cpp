#include <cstdio>
#include <vector>
#include <string>
#include <string.h>
#include <queue>
#include <map>
#include <deque>
#include <algorithm>
using namespace std;

int t,n;
char a[1001];
deque<char> d;
int main() {
	scanf("%d", &t);
	getchar();
	while (t--)
	{
		d.clear();
		scanf("%d", &n);
		getchar();
		char c;
		for (int i = 0; i < n; i++)
			scanf("%c%c", &a[i], &c);
		for (int i = 0; i < n; i++)
		{
			if (d.size() == 0) d.push_back(a[i]);
			else if (a[i] <= d.front()) d.push_front(a[i]);
			else d.push_back(a[i]);
		}
		for (int i = 0; i < d.size(); i++)
		{
			printf("%c", d[i]);
		}
		puts("");
	}
	
	return 0;
}