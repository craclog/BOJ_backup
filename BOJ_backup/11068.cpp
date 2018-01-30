#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t;

int check(int x)
{
	for (int b = 2; b <= 64; b++)
	{
		vector<int> a, c;
		int y = x;
		while (y)
		{
			a.push_back(y%b);
			y /= b;
		}
		c = a;
		reverse(c.begin(), c.end());
		if (a == c) return 1;
	}
	return 0;
}

int main()
{
	scanf("%d",&t);
	while (t--)
	{
		int x;
		scanf("%d",&x);
		printf("%d\n", check(x));
	}
	return 0;
}