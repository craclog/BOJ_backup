#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

typedef struct {
	string name;
	int kor;
	int eng;
	int math;
}mydata;

mydata arr[100001];

bool n_order(mydata a, mydata b) {
	if (a.kor > b.kor) 
		return true;
	else if (a.kor == b.kor) {
		if( a.eng < b.eng) 
			return true;
		else if (a.eng == b.eng) {
			if (a.math > b.math) 
				return true;
			else if (a.math == b.math) {
				if (a.name < b.name)
					return true;
			}
		}
	}
	return false;
}


int main() {
	int n,i;
	string a;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		cin >> arr[i].name;
		scanf("%d %d %d", &arr[i].kor, &arr[i].eng, &arr[i].math);
	}
	sort(arr, arr + n, n_order);

	
	for (i = 0; i < n; i++) {
		cout << arr[i].name;
		//printf(" %d %d %d", arr[i].kor, arr[i].eng, arr[i].math);
		puts("");
	}
	return 0;
}