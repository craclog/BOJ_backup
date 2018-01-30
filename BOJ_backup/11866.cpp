#include <cstdio>

int queue[1001] = { 0, };
int main() {
	int n, m, cur = 0, len;
	int cnt = 0;
	int islast = 0;
	int del = 0;
	scanf("%d %d", &n, &m);
	len = n;
	printf("<");
	while (del != n) {
		if (del == n - 1) islast = 1;
		//printf("\n# %d %d\n", cur, len );
		if (cur == n) cur = 0;
		++cur;
		
		if (queue[cur] == -1) continue;
		++cnt;
		if (cnt == m) {
			if (islast == 1) {
				printf("%d>\n", cur);
				return 0;
			}
			++del;
			queue[cur] = -1;
			printf("%d, ", cur);
			//if (cur == len) cur = 0;
			--len;
			cnt = 0;
			
		}
	}
	return 0;
}