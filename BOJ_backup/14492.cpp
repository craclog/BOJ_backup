#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int a[301][301];
int b[301][301];
int flag;
int main() {
	int n, m;
	int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (a[i][k] * b[k][j] == 1) {
					flag = 1;
					count++;
					break;
				}
			}
		}
	}
	printf("%d\n", count);
	return 0;
}