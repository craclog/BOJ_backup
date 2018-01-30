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

bool check(Line a, Line b) {
	long long ab = ccw(a.first, a.second, b.first)
		* ccw(a.first, a.second, b.second);
	long long ba = ccw(b.first, b.second, a.first)
		* ccw(b.first, b.second, a.second);
	if (ab == 0 && ba == 0) {
		if (a.first > a.second) swap(a.first, a.second);
		if (b.first > b.second) swap(b.first, b.second);
		return !(a.second < b.first || b.second < a.first);
	}
	return ab <= 0 && ba <= 0;
}

void dfs(int v);

int visited[3001] = { 0, };
int cnt[3001] = { 0, };
int cnt_len = 0;
int n;
Line* arr;
int main() {
	int max = 0;
	bool tmp;
	long long x1, x2, y1, y2;
	int g[3001] = { 0, };
	int g_id[3001];
	scanf("%d", &n);
	arr = new Line[n];
	for (int i = 0; i < n; i++) {
		scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
		arr[i].first.first = x1;
		arr[i].first.second = y1;
		arr[i].second.first = x2;
		arr[i].second.second = y2;
	}
	for (int i = 0; i < n; i++) {
		if( visited[i] == 0)
			dfs(i);
		if (max < cnt[cnt_len])
			max = cnt[cnt_len];
		if (cnt[cnt_len] != 0)
			cnt_len++;
		//cnt[cnt_len]++;
	}
	
	printf("%d\n%d\n", cnt_len, max);

	return 0;
}

void dfs(int v) {
	if (visited[v] == 1)
		return ;
	cnt[cnt_len]++;
	visited[v] = 1;
	for (int i = 0; i < n; i++) {
		if (visited[i] != 1 && check(arr[v], arr[i])) {
			dfs(i);
		}
	}
}