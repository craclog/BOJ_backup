#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
string s;
int main() {
	int n;
	int len;
	cin >> s;
	len = s.length();
	for (int i = 0; i < len; i++) {
		printf("%d\n", i);
	}
	return 0;
}