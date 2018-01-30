#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>


int main() {
	int n, m;
	int max = 0;
	int sum = 0;
	scanf("%d", &n);
	int* v = new int[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
		sum += v[i];
		if (max < v[i]) max = v[i];
	}
	sum -= max;
	printf("%d\n", sum);
	return 0;
}