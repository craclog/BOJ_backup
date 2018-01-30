#include <cstdio>

typedef struct p{
	int mom;
	int dad;
}p;
p* arr;
int main() {
	int n,m;
	int tmp1,tmp2;
	scanf("%d", &n);
	arr = new p[n];
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &tmp1, &tmp2);
		arr[i].mom = tmp1;
		arr[i].dad = tmp2;
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &tmp1);
		arr[tmp1 - 1].mom = arr[tmp1 - 1].dad = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j].mom == tmp1) arr[j].mom = 0;
			if (arr[j].dad == tmp1) arr[j].dad = 0;
		}
	}
	tmp1 = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i].mom != 0 && arr[i].dad != 0) ++tmp1;
	}
	printf("%d\n", tmp1);
	return 0;
}