#include <cstdio>
#include <vector>
using namespace std;
int a[65][65];
int n;
vector<char> v;
int sol(int L, int R, int size) {
	if (size == 1) return a[L][R];
	int res[4];
	int nsize = size / 2;
	v.push_back('(');
	res[0] = sol(L, R, nsize);
	if( res[0] != -1)
		v.push_back(res[0] + '0');
	res[1] = sol(L, R + nsize, nsize);
	if (res[1] != -1)
		v.push_back(res[1] + '0');
	res[2] = sol(L + nsize, R, nsize);
	if (res[2] != -1)
		v.push_back(res[2] + '0');
	res[3] = sol(L + nsize, R + nsize, nsize);
	if (res[3] != -1)
		v.push_back(res[3] + '0');
	int cpr = res[0];
	int diff = 0;
	int allerr = 1;
	for (int i = 1; i < 4; i++)
		if (cpr != res[i]) diff = 1;
	for (int i = 1; i < 4; i++)
		if (-1 != res[i]) allerr = 0;
	if (allerr != 1 && diff == 0)
	{
		for (int i = 0; i < 5; i++) v.pop_back();
		//v.push_back(res[0]+'0');
		if (n == size) v.push_back(res[0] + '0');
		return res[0];
	}
	v.push_back(')');
	return -1;
}


int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%1d", &a[i][j]);

	sol(0, 0, n);
	if (n == 1) v.push_back(a[0][0]+'0');
	for (int i = 0; i < v.size(); i++)
		printf("%c", v[i]);

	return 0;
}