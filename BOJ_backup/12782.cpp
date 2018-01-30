#include <cstdio>
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <functional>
#include <stack>
using namespace std;

char a[1000002];
char b[1000002];
int main() {
	int t,n,m;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", a);
		scanf("%s", b);
		int same = 0;
		int a0=0, a1=0, b0=0, b1 =0 ;
		int len = strlen(a);
		int res = 0;
		for (int i = 0; i < len; i++)
		{
			if (a[i] == b[i]) same++;
			else {
				if (a[i] == '0') a0++;
				else if (a[i] == '1') a1++;
				if (b[i] == '0') b0++;
				else if (b[i] == '1') b1++;
			}
		}
		int les = min(a0, a1);
		a0 -= les;
		a1 -= les;
		res += les;
		printf("%d\n", res + a0 + a1);
	}
	

	return 0;
}
