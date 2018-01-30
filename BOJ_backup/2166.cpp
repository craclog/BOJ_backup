#include <cstdio>
#include <algorithm>
using namespace std;

typedef pair < long long , long long > ll;

int main() {
	int n;
	long long sum1 = 0, sum2 = 0;
	long long tmp;
	long long res1 = 0;
	double res;
	scanf("%d", &n);
	ll* arr = new ll[n+1];
	for (int i = 0; i < n; i++) {
		scanf("%lld %lld", &arr[i].first, &arr[i].second);
	}
	arr[n] = arr[0];
	for (int i = 0; i < n+1 ; i++) {
		if (i != n) {
			tmp = arr[i].first * arr[i + 1].second;
			res1 += tmp;
		}
		if (i != 0) {
			tmp = arr[i].first * arr[i - 1].second;
			res1 -= tmp;
		}
	}

	//if (sum1 < sum2) swap(sum1, sum2);
	if (res1 < 0) res1 = res1 * (-1.0);
	//res1 = (double)res1 / (double)2.0;
	//res = (double)(sum1 - sum2) / (double)2;
	//res = (double)((sum1 - sum2) / 2);
	printf("%.1lf\n", (double)res1/2.0);


	return 0;
}