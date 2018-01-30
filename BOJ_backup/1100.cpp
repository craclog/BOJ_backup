#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n,j,i=0,tmp,cnt=0;
	char arr[90];
	tmp =1;
	for(i=0 ; i<8 ; i++)
	{
		for(j=0 ; j<8 ; j++)
		{
			scanf("%c",&arr[tmp]);
			if(tmp%2==1)
			{
				if(arr[tmp] == 'F')
					cnt++;
			}
			tmp++;
		}
		tmp++;
		getchar();
	}
	
	printf("%d\n",cnt);
	return 0;
}
