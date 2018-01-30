#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int twice,sum=0;
	int n,m,j,i;
	int a[100][100];
	int b[100][100];
	scanf("%d%d",&n,&m);

	for(i=0; i<n ; i++)
	{
		for(j=0 ; j<m ; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n ; i++)
	{
		for(j=0 ; j<m ; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<n ; i++)
	{
		for(j=0 ; j<m ; j++)
		{
			a[i][j]+= b[i][j];
		}
	}
	for(i=0; i<n ; i++)
	{
		for(j=0 ; j<m ; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}


	return 0;
}
