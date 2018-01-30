#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
char a[5][20];
int main() {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 20; j++)
			a[i][j] = '\0';
	for (int i = 0; i < 5; i++)
		scanf("%s", a[i]);
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[j][i] <= '9' && a[j][i] >= '0'
				|| a[j][i] <= 'Z' && a[j][i] >= 'A'
				|| a[j][i] <= 'z' && a[j][i] >= 'a')
				printf("%c", a[j][i]);
		}
	}
	puts("");
	return 0;
}