#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int a[1002];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", a + i);
	sort(a, a + n);
	int sum = 0;
	int tmp = 0;
	for (int i = 0; i < n; i++) 
	{
		sum += tmp + a[i];
		tmp += a[i];
	}
		
	printf("%d\n", sum);
	return 0;
}