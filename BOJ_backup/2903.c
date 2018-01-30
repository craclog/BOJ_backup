#include<stdio.h>


int main()
{
	int i;
	int n;
	int dap;
	int cnt=1;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		cnt *=2;
	}
	cnt++;
	dap = cnt*cnt;
	printf("%d\n",dap);
	return 0;
}