#include <stdio.h>

int main()
{
	int in,out,i,n;
	int tmp=0;
//	int cnt=0;
	int max=0;
	for(i=0 ; i<4 ; i++)
	{
		scanf("%d %d",&out,&in);
		if(max < tmp)
		{
			max=tmp;
		}
		tmp = tmp -out +in;
		if(max < tmp)
		{
			max=tmp;
		}
	}
	printf("%d\n",max);
	return 0;
}