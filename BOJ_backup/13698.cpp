#include <cstdio>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
using namespace std;

char str[300];
int a[4];
int rule[6][2] = { {0,1},{0,2},{0,3},{1,2},{1,3},{2,3} };
int main() {
	scanf("%s", str);
	int len = strlen(str);
	for (int i = 0; i < 4; i++)
		a[i] = i + 1;
	for (int i = 0; i < len; i++)
	{
		swap(a[rule[str[i] - 'A'][0]], a[rule[str[i] - 'A'][1]]);
	}
	int st, la;
	for (int i = 0; i < 4; i++)
	{
		if (a[i] == 1) st = i+1;
		else if (a[i] == 4) la = i+1;
	}
	printf("%d %d\n", st, la);
	return 0;
}