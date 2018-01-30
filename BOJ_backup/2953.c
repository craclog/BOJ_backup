#include<stdio.h>

int main()
{
	int i,j;
	int ele[4];
	int sum[5];
	int max=0;
	int maxnum;
	for(i=0;i<5;i++)
	{
		sum[i]=0;
		for(j=0;j<4;j++)
		{
			scanf("%d",&ele[j]);
			sum[i]+=ele[j];
		}
		if(max<sum[i])
		{
			max = sum[i];
			maxnum = i;
		}
	}
	printf("%d %d\n",maxnum+1,max);

	return 0;
}