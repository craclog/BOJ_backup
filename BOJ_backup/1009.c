#include <stdio.h>

int main()
{
	int tc;
	int a,b;
	int at,result;
	int i;

	scanf("%d",&tc);

	while(tc--)
	{
		scanf("%d %d",&a,&b);
		at=1;
		for(i=0 ; i<b ; i++)
		{
			at*=a;
			at=at%10;
		}
		if(a%10 == 0) result=10;
		else result=at%10;
			//at-10*(int)(at/10);

		printf("%d\n",result);

	}


	return 0;
}