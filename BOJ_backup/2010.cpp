#include <stdio.h>
#include <string.h>

int main()
{
	int tmp;
	int n,i;
	int sum=1;
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&tmp);
		sum = sum-1+tmp;
	}
	printf("%d\n",sum);
	return 0;
}
