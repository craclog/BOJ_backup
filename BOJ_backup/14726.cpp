#include <cstdio>

char str[20];
int main() {
	int t;
	scanf("%d", &t);
	//getchar();
	while (t--)
	{
		int sum = 0;
		scanf("%s", str);
		for (int i = 0; i < 16; i++)
		{
			int tmp = str[i] - '0';
			if (i % 2 == 0)
			{
				tmp *= 2;
				//if( tmp < 10) str[i] = tmp + '0';
				if (tmp >= 10)
				{
					int tmpp = tmp % 10;
					tmp /= 10; tmp += tmpp;
				}
			}
			sum += tmp;
		}
		
		if (sum % 10 == 0) puts("T");
		else puts("F");


	}
	return 0;
}