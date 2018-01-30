#include <cstdio>
#include <vector>
#include <string>
#include <string.h>
#include <queue>
#include <map>
#include <set>
#include <deque>
#include <algorithm>
#include<functional>
using namespace std;

int a[100001];
int b[100001][2];
int n, k, maxx = 0, maxi = 0, maxtype;
vector<pair<int, int>> v;
vector<int> bb;
int findmax(int cur) {
	maxx = 0;
	for (int i = cur + 1; i < bb.size(); i++)
	{
		if (maxx < bb[i])
		{
			maxx = bb[i];
			maxi = i;
			if( i % 2 == 0)
				maxtype = 0;
			else maxtype = 1;
		}
	}
	v.push_back(pair<int, int>(maxx,maxtype));
	return maxi;
}
int main() {
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", a + i);
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		bb.push_back(tmp1);
		bb.push_back(tmp2);
	}
	//sort(a,a+size,greater<int>());
	int ret = -1;
	while( ret != bb.size() - 1 ) ret = findmax(ret);
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].second == 0) sort(a, a + v[i].first);
		else sort(a,a+v[i].first,greater<int>());
	}
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	puts("");
	return 0;
}