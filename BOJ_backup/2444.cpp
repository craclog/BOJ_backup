#include <stdio.h>


int main() {

	int i,j,n;

	scanf("%d",&n);

	for(i=0 ; i<2*n-i ; i++)
	{
		if(i< n-1)
		{
		for(j=0 ; j<n-i-1 ; j++)
		{
			printf(" ");
		}
		for( j=0 ; j<2*i+1 ; j++)
		{
			printf("*");
		}
		
		printf("\n");
		}

		else
		for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j < i ; j++)
		{
			printf(" ");
		}
		for(j=0 ; j< 2*n-1-2*i ; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
			
			
			
			
			/*{
		for(j=n-1 ; j < i ; j++)
		{
			printf(" ");
		}
		for(j=n-1 ; j< 2*(n-i+n-1)+n-2 ; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}*/
	}

return 0;
}
