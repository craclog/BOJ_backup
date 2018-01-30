#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Max(int a,int b);

int main()
{
	int **D;
	int **arr;
	int res=0;
	int n,i,j;
	scanf("%d",&n);
	D = (int**)malloc(sizeof(int*)*n);
	arr = (int**)malloc(sizeof(int*)*n);
	

	for(i=0 ; i< n ; i++)
	{
		*(D+i) = (int*)malloc(sizeof(int)*(i+2));
		*(arr+i) = (int*)malloc(sizeof(int)*(i+2));
		for(j=0 ; j< i+1 ; j++)
		{
			D[i][j] = 0;
			D[i][j+1] = 0;
			arr[i][j] = 0;
			arr[i][j+1] = 0;
			scanf("%d",&arr[i][j]);
		}
	}
	D[0][0] = arr[0][0];
	for(i=1 ; i< n ; i++)
	{
		for(j=0 ; j<i+1 ; j++)
		{
			if(j==0)
				D[i][j] = D[i-1][j] + arr[i][j];
			else
			D[i][j] = arr[i][j] + Max(D[i-1][j],D[i-1][j-1]);
		}
	}
	for(i=0 ; i< n ; i++)
	{
		res = Max(res,D[n-1][i]);
	}
	
	printf("%d\n",res);
	return 0;
}

int Max(int a,int b)
{
	if(a>b) return a;
	else return b;
	//return (a>b ? a:b);
}