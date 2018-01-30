#include <stdio.h>

int main()
{
	int n,i;
	long long temp=0;
	int tc,day=1;
	int pig[6];
	int tmp[6];
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d",&n);
		for(i=0; i<6 ;i++)
		{
			scanf("%d",&pig[i]);
		}
		for(;;)
		{
			temp=0;
			for(i=0 ; i<6; i++)
			{
				temp += pig[i];
			}
			if(temp <= n)
			{
				day++;
				tmp[0] = pig[0] + pig[1] + pig[5] + pig[3];
				tmp[1] = pig[1] + pig[2] + pig[0] + pig[4];
				tmp[2] = pig[2] + pig[3] + pig[1] + pig[5];
				tmp[3] = pig[3] + pig[4] + pig[2] + pig[0];
				tmp[4] = pig[4] + pig[5] + pig[3] + pig[1];
				tmp[5] = pig[5] + pig[0] + pig[4] + pig[2];
				for(i=0 ; i<6 ; i++)
				{
					pig[i] = tmp[i];
				}
			}
			else
			{
				printf("%d\n",day);
				day=1;
				break;
			}
		}
	}
	return 0;
}