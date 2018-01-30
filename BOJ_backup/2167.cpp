#include <stdio.h>
#include <string.h>

int main()
{
	int arr[300][300];
	int n,m,i,j,tc;
	int a,b,c,d,sum;
	scanf("%d%d",&n,&m);
	for(i=0 ; i<n ; i++)
	{
		for(j=0; j<m ; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	scanf("%d",&tc);
	while(tc--)
	{
		sum=0;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		for(i=a-1;i<=c-1 ;i++)
		{
			for(j=b-1 ; j<=d-1 ; j++)
			{
				sum += arr[i][j];

			}
		}
		printf("%d\n",sum);
	}
		return 0;
}
