#include <cstdio>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

int k;
int s[7];
int key[10];
vector<int> vk;
vector<int> hoobo1;
vector<int> hoobo2;
int n;
int pow(int n) {
	int r = 1;
	
	for (int i = 1; i < n; i++)
		r *= 10;
	return r;
}
void makehoobo(vector<int>& v, int n) {
	int n1, n2, n3, n4, n5;
	for (int q = 0; q < k; q++)
	{
		n1 = vk[q];
		if (n == 1) { v.push_back(n1); continue; }
		else
		{
			for (int w = 0; w < k; w++)
			{
				//if (w == q) continue;
				n2 = n1 + 10 * vk[w];
				if (n == 2) { v.push_back(n2); continue; }
				else		
					for (int e = 0; e < k; e++)
					{
						//if (e == w || e == q) continue;
						n3 = n2 + 100 * vk[e];
						if (n == 3) { v.push_back(n3); continue; }
						else
						for (int r = 0; r < k; r++)
						{
							//if (r == e || r == w || r == q) continue;
							n4 = n3 + 1000 * vk[r];
							if (n == 4) { v.push_back(n4); continue; }
							else
							for (int t = 0; t < k; t++)
							{
								//if (t == r || t == e || t == w || t == q) continue;
								n5 = n4 + 10000 * vk[t];
								if (n == 5) { v.push_back(n5); continue; }
							}
						}
					}
			}
		}
	}
}
bool check(int n) {
	int tmp;
	while (n != 0)
	{
		tmp = n % 10;
		if (key[tmp] == 0) return false;
		n /= 10;
	}
	return true;
}
bool sol(int i, int j) {
	int tmp = hoobo2[j];
	int cnt = 0;
	while (tmp != 0)
	{
		cnt++;
		int a = tmp % 10;
		int ret = hoobo1[i] * a;
		int flag = check(ret);
		if (!flag) return false;
		if (pow(s[cnt + 1]) <= ret && ret < pow(s[cnt + 1] + 1) ) ;
		else return false;
		tmp /= 10;
		
	}
	int a = hoobo1[i] * hoobo2[j];
	if (!check(a)) return false;
	if (pow(s[n - 1]) <= a && a < pow(s[n - 1] + 1));
	else return false;
	//printf("%d %d\n", hoobo1[i], hoobo2[j]);
	return true;
}
int main() {
	int tmp;
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", s + i);
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &tmp);
		key[tmp] = 1;
		vk.push_back(tmp);
	}
	///
	/*
	hoobo1.push_back(222);
	hoobo2.push_back(22);
	sol(0, 0);
	*/
	int num = 0;
	makehoobo(hoobo1, s[0]);
	makehoobo(hoobo2, s[1]);
	for (int i = 0; i < hoobo1.size(); i++)
	{
		for (int j = 0; j < hoobo2.size(); j++)
		{
			if (sol(i, j)) cnt++;
		}
	}
	printf("%d\n", cnt);
	
	return 0;
}