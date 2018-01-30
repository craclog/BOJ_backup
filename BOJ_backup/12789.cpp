#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
using namespace std;
int a[1001];
stack<int> ss;
queue<int> qq;
int main() {
	int n, m, k;
	int cur = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		scanf("%d", &tmp);
		qq.push(tmp);
	}
	int flag = 1;
	while (ss.size() != 0 || qq.size() != 0)
	{
		if (qq.size() != 0 && cur == qq.front())
		{
			cur++;
			qq.pop();
			continue;
		}
		if (ss.size() != 0 && cur == ss.top())
		{
			cur++;
			ss.pop();
			continue;
		}
		if( qq.size() != 0 && cur != qq.front())
		{
			int tmp = qq.front();
			qq.pop();
			ss.push(tmp);
			continue;
		}
		if (qq.size() == 0 && cur != ss.top())
		{
			flag = 0;
			break;
		}
	}
	if (flag == 0) puts("Sad");
	else puts("Nice");
	return 0;
}