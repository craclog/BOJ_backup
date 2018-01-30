#include <cstdio>
#include <vector>
#include <algorithm>
#include <string.h>
#include <iostream>
using namespace std;
char a[1000];
int main() {
	scanf("%s", a);
	int len = strlen(a);
	int cnt = 0;
	for (int i = 0; i < len; i++)
	{
		printf("%c", a[i]);
		cnt++;
		if (cnt == 10)
		{
			cnt = 0;
			puts("");
		}
	}
	puts("");
	return 0;
}