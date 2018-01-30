#include <cstdio>
#include <algorithm>
#include <deque>
#include <string>
#include <vector>
using namespace std;

vector<string> v[101];
int cur[101];
int ccnt = 0;
int main() {
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		char a[35];
		int j = 0;
		while (1)
		{
			char c;
			scanf("%c", &c);
			if (c == ' ')
			{
				a[j] = '\0';
				v[i].push_back(a);
				j = 0;
				continue;
			}
			else if (c == '\n')
			{
				a[j] = '\0';
				v[i].push_back(a);
				break;
			}
			a[j++] = c;
		}

	}
	for (int i = 0; i < n; i++)
		ccnt += v[i].size();
	char a[35];
	int j = 0;
	int isfail = 0;
	int cur_cnt = 0;
	while (1)
	{
		char c;
		scanf("%c", &c);
		if (c == ' ')
		{
			a[j] = '\0';
			j = 0;
			int flag = 1;
			for (int i = 0; i < n; i++)
			{
				if (cur[i] < v[i].size() && v[i][cur[i]].compare((string)a) == 0)
				{
					cur[i]++;
					flag = 0;
					cur_cnt++;
					break;
				}
			}
			if (flag == 1) { isfail = 1; break; }
			continue;
		}
		else if (c == '\n' || c == EOF)
		{
			a[j] = '\0';
			j = 0;
			int flag = 1;
			for (int i = 0; i < n; i++)
			{
				if (cur[i] < v[i].size() && v[i][cur[i]].compare((string)a) == 0)
				{
					cur[i]++;
					flag = 0;
					cur_cnt++;
					break;
				}
			}
			if (flag == 1) { isfail = 1; break; }
			break;
		}
		a[j++] = c;
	}
	if (ccnt != cur_cnt) isfail = 1;
	if (isfail) puts("Impossible");
	else puts("Possible");
	return 0;
}