#include <cstdio>


int main() {
	int n, m;
	scanf("%d", &n);
	if (n % 2 == 0) {
		puts("I LOVE CBNU");
		return 0;
	}
	for (int i = 0; i < n; i++) {
		printf("*");
	}
	puts("");


	for (int i = 0; i < n / 2; i++) {
		printf(" ");
	}
	printf("*\n");
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < n/2 - i -1; j++) {
			printf(" ");
		}
		printf("*");
		for (int j = 0; j < i * 2 + 1; j++) {
			printf(" ");
		}
		printf("*\n");
	}
	return 0;
}