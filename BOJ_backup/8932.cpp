#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

double rule[7][3] = {
	{9.23076, 26.7, 1.835}, 
	{1.84523, 75, 1.348}, 
	{56.0211, 1.5, 1.05}, 
	{4.99087, 42.5, 1.81},
	{0.188807, 210, 1.41}, 
	{15.9803, 3.8, 1.04}, 
	{0.11193, 254, 1.88}
};
int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		double a[7];
		int sum = 0;
		for (int i = 0; i < 7; i++)
			scanf("%lf", a + i);
		for (int i = 0; i < 7; i++)
		{
			if (a[i] >= rule[i][1]) sum += (int)(rule[i][0] * pow(a[i] - rule[i][1], rule[i][2]));
			else sum += (int)(rule[i][0] * pow(rule[i][1] - a[i], rule[i][2]));
		}
		printf("%d\n", sum);
	}


	return 0;
}
