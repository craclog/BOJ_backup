#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	int a, b,c;
	char tmp;
	int flag = 0;
	scanf("%d %c %d", &a,&tmp,&b);
	if (a > b) {
		swap(a, b);
		flag = 1;
	}
	if (a == b) {
		printf("1:1\n");
		return 0;
	}
	for (int i = 2; i <= a; i++) {
		//if (i > a) break;
		if (a%i == 0 && b%i == 0) {
			a /= i;
			b /= i;
			i = 2;
		}
	}
	if (flag == 1) swap(a, b);
	printf("%d:%d\n", a, b);
	
	return 0;
}