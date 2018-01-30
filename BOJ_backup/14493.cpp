#include <cstdio>
using namespace std;

int nextt;
int *gap, *on;
int get_status(int time, int n) {
	int sum = gap[n] + on[n];
	int tmp;
	tmp = time % sum;
	if (tmp <= on[n]) {
		nextt = on[n] - tmp;
		return 0;
	}
	else return 1;
}
int main() {
	int n;
	int cur = 0;
	int time = 0;
	int status;
	scanf("%d", &n);
	gap = new int[n];
	on = new int[n];
	

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &gap[i], &on[i]);
	}
	while (cur != n) {
		status = get_status(time, cur);
		if (status == 1) {
			cur++;
			time++;
			//printf("passed %d : %d\n", cur, time);
		}
		else {
			time += nextt;
			time++;
			cur++;
			//printf("passed %d : %d\n", cur, time);
		}
	}
	printf("%d\n", time);
	return 0;
}