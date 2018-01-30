#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main() {
	string a, b;
	cin >> a;
	cin >> b;
	int cnt = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == b[0] && (i+b.length() - 1) < a.length() && a[i + b.length() - 1] == b[b.length() - 1])
		{
			int flag = 1;
			for (int j = 0; j < b.length(); j++)
			{
				if (a[i + j] != b[j])
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1) cnt++;
		}
	}
	printf("%d\n", cnt);
	
	return 0;
}