#include <stdio.h>

int main()
{
	int i,k,n;
	int cnt=0;
	int max=0;
	for(i=0 ; i<9 ; i++)
	{
		cnt++;
		scanf("%d",&n);
		if(max < n)
		{
			max=n;
			k=cnt;
		}
	}
	printf("%d\n%d\n",max,k);
	return 0;
}