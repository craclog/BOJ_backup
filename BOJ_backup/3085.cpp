#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
char a[52][52];
int n;
void checkX(int& maxx, int r) {
	int cur;
	char tile = -1;
	for (int j = 0; j < n; j++)
	{
		if (tile == a[r][j])
		{
			cur++;
		}
		else {
			cur = 1;
			tile = a[r][j];
		}
		maxx = max(maxx, cur);
	}
}
void checkY(int& maxx, int c) {
	int cur;
	char tile = -1;
	for (int j = 0; j < n; j++)
	{
		if (tile == a[j][c])
		{
			cur++;
		}
		else {
			cur = 1;
			tile = a[j][c];
		}
		maxx = max(maxx, cur);
	}
}
int main() {
	int maxx = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[i][j] != a[i][j + 1])
			{
				swap(a[i][j], a[i][j + 1]);
				checkX(maxx,i);
				checkY(maxx, j);
				checkY(maxx, j+1);
				swap(a[i][j], a[i][j + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j][i] != a[j+1][i])
			{
				swap(a[j][i], a[j+1][i]);
				checkY(maxx, i);
				checkX(maxx, j);
				checkX(maxx, j + 1);
				swap(a[j][i], a[j+1][i]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		checkX(maxx, i);
		checkY(maxx, i);
	}
	printf("%d\n", maxx);
	return 0;
}