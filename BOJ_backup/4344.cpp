#include <cstdio>

int a[1001];
int main() {
	int tc, n;
	int sum;
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%d", &n);
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			sum += a[i];
		}
		double avg = sum / n;
		int cnt = 0;
		for (int i = 0; i < n; i++)
			if (a[i] > avg) cnt++;
		printf("%.3lf%%\n", cnt / (double)n * 100);
	}
	return 0;
}