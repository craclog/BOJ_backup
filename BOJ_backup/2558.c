#include <stdio.h>

int gy(int a, int b)
{
	return a+b;
}
	

int main()
{
	
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", gy(a,b));

	return 0;

}



