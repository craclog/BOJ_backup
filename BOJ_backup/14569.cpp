#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
struct myc {
	int k;
	int time[51] = { 0, };
};

myc timetable[1001];
myc stu[10001];

int main() {
	int n,m,k,tmp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		timetable[i].k = k;
		for (int j = 0; j < k; j++) {
			scanf("%d", &tmp);
			timetable[i].time[j] = tmp;
		}
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &k);
		stu[i].k = k;
		for (int j = 0; j < k; j++) {
			scanf("%d", &tmp);
			stu[i].time[tmp] = 1;
			// 해당 시간대 가능하면 1로 set.
		}
	}
	for (int i = 0; i < m; i++) {
		int stu_index = 0;
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			int tim_index = 0;
			int ll = timetable[j].k;
			int flag = 1;
			if (stu[i].k < timetable[j].k) continue;
			// check
			for (tim_index = 0; tim_index < ll; tim_index++) {
				if (stu[i].time[timetable[j].time[tim_index]] == 0) {
					flag = 0;
					break;
				}
			}
			if (flag == 1) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}