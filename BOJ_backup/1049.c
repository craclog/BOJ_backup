#include <stdio.h>

int pack[51];
int single[51];
int min_p = 1000;
int min_s = 1000;
int main() {
	int n, m;
	int i,tmp;
	int res = 0;
	scanf("%d %d", &n,&m);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &pack[i], &single[i]);
		if (min_p > pack[i]) {
			min_p = pack[i];
		}
		if (min_s > single[i]) {
			min_s = single[i];
		}
	}
	if (6 * min_s < min_p)
		min_p = 6 * min_s;
	if (n >= 6) {
		tmp = n / 6;
		res = tmp * min_p;
		n -= tmp * 6;
	}
	if (n * min_s > min_p)
		res += min_p;
	else
		res += n * min_s;
	//printf("%d %d %d\n", n, min_s, min_p);
	printf("%d\n", res);

	return 0;
}