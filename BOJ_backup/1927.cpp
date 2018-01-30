#include <cstdio>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;

priority_queue<long long, vector<long long>, greater<long long>> pq;
int main() {
	int n;
	long long a;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &a);
		if( a > 0)
			pq.push(a);
		if (a == 0) {
			if (pq.empty()) puts("0");
			else {
				long long tmp = pq.top();
				pq.pop();
				printf("%lld\n", tmp);
			}
		}
	}
	
	return 0;
}