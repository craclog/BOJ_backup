#include<stdio.h>
#include<stdlib.h>

int main()
{
	char arr[101];
	char dap[101];
	int i,j=0;
	fgets(arr,sizeof(arr),stdin);
	//printf("%s",arr);
	
	for(i=0;i<strlen(arr)-1;i++)
	{
		if(arr[i] >= 'A' && arr[i]<= 'Z')
		{
			dap[j] = arr[i];
			j++;
		}
	}
	dap[j] = 0;
	printf("%s\n",dap);

	return 0;
}