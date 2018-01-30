#include <cstdio>
int arr[504];
char str[504];

int main() {
	int t;
	int n;
	char m;
	scanf("%d", &t);
	getchar();
	while (t--)
	{
		scanf("%d %c", &n,&m);
		getchar();
		if (m == 'N')
		{
			for (int i = 0; i < n; i++)
				scanf("%d", arr + i);
			for (int i = 0; i < n; i++)
				printf("%c ", arr[i]+'A' - 1);
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				scanf("%c", str + i);
				getchar();
			}
			for (int i = 0; i < n; i++)
				printf("%d ", str[i] - 'A' + 1);
		}
		puts("");
	}
	return 0;
}