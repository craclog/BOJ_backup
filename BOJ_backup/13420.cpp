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

deque<char> x, y;
int main() {
	scanf("%d", &t);
	getchar();
	while (t--)
	{
		long long a, b,res, my;
		char op, c;
		scanf("%lld", &a);
		scanf("%c%c%c", &c, &op, &c);
		scanf("%lld", &b);
		scanf("%c%c%c", &c, &c, &c);
		scanf("%lld", &res);
		switch (op)
		{
		case '*':
			my = a * b;
			break;
		case '/':
			my = a / b;
			break;
		case '+':
			my = a + b;
			break;
		case '-':
			my = a - b;
			break;
		}
		if (my == res) puts("correct");
		else puts("wrong answer");
	}
	
	return 0;
}