#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> k;



int main() {
	int n,i,tmp;
	int a, b, c,d;
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d", &tmp);
		k.push_back(tmp);
	}

	sort(k.begin(),k.end());

	a = k[k.size() - 1] * k[k.size() - 2];
	b = a * k[k.size() - 3];
	if (k[0] * k[1] > a)
		a = k[0] * k[1];
	if (k[0] * k[1] * k[k.size() - 1] > b)
		b = k[0] * k[1] * k[k.size() - 1];
	printf("%d", a > b ? a : b);

}