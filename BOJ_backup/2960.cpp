#include <cstdio>
int a, b;
bool* Eratos(int n)
{
	int cnt = 0;
	bool* PrimeArray;
	if (n <= 1) return PrimeArray;
	PrimeArray = new bool[n + 1];
	for (int i = 2; i <= n; i++) PrimeArray[i] = true;
	for (int i = 2; (i) <= n; i++)
	{
		if (PrimeArray[i])
		{
			cnt++;
			if (cnt == b) printf("%d\n", i);
			for (int j = i*i; j <= n; j += i)
			{
				if (!PrimeArray[j]) continue;
				cnt++;
				if (cnt == b) printf("%d\n", j);
				PrimeArray[j] = false;
			}
		}
	}
	return PrimeArray;
}

int main() {
	scanf("%d %d", &a, &b);
	Eratos(a);
	return 0;
}