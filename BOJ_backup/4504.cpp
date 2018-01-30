#include <stdio.h>


int main() 
{
	int a[99999];
	int i;
	int length;

	for(i=0; i<99999 ; i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		length=i;
	}
	
	for(i=1; i<=length ; i++)
	{
		if(a[i]%a[0]==0) printf("%d is a multiple of %d.\n",a[i],a[0]);
		else printf("%d is NOT a multiple of %d.\n",a[i],a[0]);
	}
	
	return 0;
}