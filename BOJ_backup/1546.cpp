#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	float arr[1000];
	int i,j,n;
	float max=0;
	float sum=0;
	float res;
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%f",&arr[i]);
		if(max<arr[i]) max = arr[i];
	}

	for(i=0 ; i<n ; i++)
	{
		arr[i] = arr[i]/max*100;
		sum += arr[i];
	}
	res = sum/n;
	printf("%.2f\n",res);
	return 0;
}
