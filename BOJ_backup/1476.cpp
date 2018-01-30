#include <cstdio>

int main() {
	int a[3];
	int b[3] = { 15,28,19 };
	for (int i = 0; i < 3; i++)
		scanf("%d", a + i);
	int maxx = 15 * 28 * 19;
	for (int i = a[0]; i <= maxx; i += 15)
	{
		int flag = 1;
		for (int j = 0; j < 3; j++)
		{
			if (a[j] == b[j])
			{
				if (i % b[j] == 0);
				else flag = 0;
			}
			else
			{
				if (i % b[j] == a[j]);
				else flag = 0;
			}
		}
		if (flag == 1) { printf("%d\n", i); break; }
	}
	
	return 0;
}