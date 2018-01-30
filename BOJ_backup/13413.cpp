#include <cstdio>
#include <vector>
#include <string>
#include <string.h>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;
int n,t;
char a[100003];
char b[100003];

int main() {
	scanf("%d", &t);
	while (t--)
	{
		int aw = 0, bw = 0;
		int ab = 0, bb = 0;
		int matchW = 0, matchB = 0;
		int need;
		int diff = 0;
		int res = 0;
		scanf("%d", &n);
		scanf("%s", a);
		scanf("%s", b);
		for (int i = 0; i < strlen(a); i++)
		{
			if (a[i] != b[i])
			{
				diff++;
				if (a[i] == 'W') aw++;
				else ab++;
				if (b[i] == 'W') bw++;
				else bb++;
			}
		}

		int same = min(ab,aw);
		res += same;
		diff -= same * 2;
		res += diff;
		
		
		
		printf("%d\n", res);
	}
	
	return 0;
}