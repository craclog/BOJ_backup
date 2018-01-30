#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> a;
void sol(int n) {
	for (int i = 0; i<a.size(); i++)
		for (int j = 0; j<a.size(); j++)
			for (int k = 0; k < a.size(); k++)
			{
				int sum = a[i] + a[j] + a[k];
				if (n == sum)
				{
					puts("1");
					return;
				}
			}
	puts("0");
	return;
}
int main() {
	int t,n;
	a.push_back(1);
	for (int i = 1;i<1000; i++)
	{
		int tmp = a[i - 1] + i + 1;
		if (tmp > 1000) break;
		a.push_back(tmp);
	}
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		sol(n);
	}
	return 0;
}