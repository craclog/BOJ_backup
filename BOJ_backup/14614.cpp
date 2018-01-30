#include <cstdio>
#include <vector>
#include <set>
#include <string.h>
#include <functional>
using namespace std;

int main() {
	int n;
	int a, b;
	char s[105];
	scanf("%d%d", &a, &b);
	scanf("%s", s);
	int flag = s[strlen(s) - 1] - '0';
	if (flag % 2 == 0)
	{
		printf("%d\n", a);
	}
	else printf("%d\n", a ^ b);
	return 0;
}