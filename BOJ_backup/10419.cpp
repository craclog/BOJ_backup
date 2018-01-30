#include <cstdio>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int t,n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		int maxx = 0;
		for (int i = 0; i < 10000; i++)
		{
			if (i + i*i <= n) maxx = max(maxx, i);
		}
		printf("%d\n", maxx);
	}
	

}