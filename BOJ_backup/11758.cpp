#include <cstdio>
#include <algorithm>
using namespace std;

typedef pair <long long, long long> ll;
typedef pair <ll, ll> Line;

long long ccw(ll a, ll b, ll c) {
	long long t = a.first*b.second + b.first*c.second
		+ c.first*a.second - b.first*a.second - c.first*b.second
		- a.first*c.second;
	if (t > 0) return 1;
	else if (t == 0) return 0;
	else return -1;
}

int main() {
	ll a, b, c;
	scanf("%lld %lld", &a.first, &a.second);
	scanf("%lld %lld", &b.first, &b.second);
	scanf("%lld %lld", &c.first, &c.second);
	//printf("%lld %lld\n", a.first, a.second);
	printf("%d\n", ccw(a, b, c));



	return 0;
}