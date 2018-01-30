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
char a[30];
deque<char> x, y;
int main() {
	scanf("%d", &t);
	while (t--)
	{
		x.clear(); y.clear();
		scanf("%s", a);
		for (int i = 0; i < strlen(a); i++)
		{
			if (i % 2 == 0) x.push_back(a[i]);
			else y.push_back(a[i]);
		}
		if (strlen(a) % 2 == 1)
		{
			for (int i = 0; i < strlen(a); i++)
			{
				if (i % 2 == 1) x.push_back(a[i]);
				else y.push_back(a[i]);
			}
		}
		for (int i = 0; i < x.size(); i++)	
			printf("%c", x[i]);
		puts("");
		for (int i = 0; i < y.size(); i++)
			printf("%c", y[i]);
		puts("");
		
	}
	
	return 0;
}