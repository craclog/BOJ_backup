#include <cstdio>
#include <algorithm>
using namespace std;
int a[10];
int main() {
	while (1)
	{
		char c;
		scanf("%c", &c);
		if (c == EOF || c == '\0' || c== '\n') break;
		a[c-'0']++;
	}
	int maxx = 0;
	a[6] += a[9];
	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9) maxx = max(maxx, (a[i]+1) / 2);
		else maxx = max(maxx, a[i]);
	}
	printf("%d\n", maxx);
	

	return 0;
}
