#include <stdio.h>


int main() 
{
	int a[10];
	int i;
	int sum=0;
	for(i=0; i< 10 ; i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	printf("%d\n",a[0]*2-sum);


	return 0;
}