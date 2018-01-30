#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	int t;
	int tmp;
	int jari = 0;
	char str[10];
	scanf("%d", &t);
	while (1) {
		str[jari] = t % 9;
		if (t < 9) break;
		t = t / 9;
		jari++;	
	}
	for (int i = jari; i >= 0; i--) {
		printf("%d", str[i]);
	}
	puts("");

	
	return 0;
}