#include <cstdio>
using namespace std;

int main() {
	int n, fail = 0;
	double tmp1, tmp2;
	double t;
	scanf("%d %lf", &n, &t);
	int* pos = new int[n];
	int* spd = new int[n];
	double* min = new double[n];
	double* max = new double[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &pos[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &spd[i]);
		min[i] = pos[i] - spd[i] * t;
		max[i] = pos[i] + spd[i] * t;
	}
	tmp1 = min[0];
	tmp2 = max[0];
	for (int i = 1; i < n; i++) {
		if (min[i] > tmp1) tmp1 = min[i];
		if (max[i] < tmp2) tmp2 = max[i];
		if (tmp1 > tmp2) {
			fail = 1;
		}
	}
	if (fail) puts("0");
	else puts("1");

	return 0;
}