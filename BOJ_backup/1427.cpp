#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int arr[12];
	int k,m,i,j,tmp;
	int temp;
	scanf("%d",&tmp);
	for(i=0 ;;i++)
	{
		if(tmp ==0)
			break;
		arr[i] = tmp%10;
		tmp /= 10;
	}
	for(k=0 ; k<i ; k++)
	{
		for(m=k ; m<i ; m++)
		{
			if(arr[k] < arr[m]){
				temp = arr[k];
				arr[k] = arr[m];
				arr[m] = temp;
			}
		}
	}
	for(k=0 ; k<i ; k++)
		printf("%d",arr[k]);
	printf("\n");
	return 0;
}
