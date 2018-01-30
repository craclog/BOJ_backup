#include <cstdio>
#include <vector>
using namespace std;
int n;
vector<char> v;

int main() {
	int a,b;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &a, &b);
		if (b == 0) continue;
		sum += a*b;
	}
	printf("%d", sum);
	return 0;
}