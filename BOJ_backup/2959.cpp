#include <stdio.h>

int main() 
{ 
	int tmp;
	int a[4];

	for(int i=0 ; i<4; i++)
	{
		scanf("%d", &a[i]);
	}
for(int i=0 ; i<4 ; i++) 
{
	for(int j=i ; j<4 ; j++)
	{
		if(a[i]>a[j]) 
		{ tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		}
	}
}
printf("%d\n",a[0]*a[2]);




	return 0;
}