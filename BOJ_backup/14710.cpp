#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
using namespace std;
//a : 0.5   b : 6
int main() {	
	int a,b;
	scanf("%d %d", &a,&b);
	int tmp = a % 30;
	int min = tmp * 2;
	if (b == min * 6) puts("O");
	else puts("X");

	//int n;
	//scanf("%d", &n);





	return 0;
}