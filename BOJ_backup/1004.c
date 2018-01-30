#include <stdio.h>

int main()
{
	int count=0;
	int tc,i;
	int x1,y1,x2,y2,n;
	int cx[50]={0,};
	int cy[50]={0,};
	int r[50]={0,};



	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		scanf("%d",&n);
		for(i=0; i<n ;i++)
		{
			scanf("%d %d %d",&cx[i],&cy[i],&r[i]);
		}

		for(i=0 ; i<n ; i++)
		{
			if( (x1-cx[i])*(x1-cx[i]) + (y1-cy[i])*(y1-cy[i]) <= r[i]*r[i])
			{
				count++;
			}
			if( (x2-cx[i])*(x2-cx[i]) + (y2-cy[i])*(y2-cy[i]) <= r[i]*r[i])
			{
				count++;
			}
			if((x1-cx[i])*(x1-cx[i]) + (y1-cy[i])*(y1-cy[i]) <= r[i]*r[i] && (x2-cx[i])*(x2-cx[i]) + (y2-cy[i])*(y2-cy[i]) <= r[i]*r[i])
			{
				count-=2;
			}
		}

		printf("%d\n",count);
		count=0;
	}
	return 0;
}