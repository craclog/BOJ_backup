#include <stdio.h>

int main()
{
	int m,i,n,j;
	int m1,m2,m3;
	int tmp=0;
	int sum=0;
	int cnt;
	int max=0;
	int min=10001;
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		sum=0;
		scanf("%d %d %d",&m1,&m2,&m3);
		if(m1 == m2 && m1 == m3)
		{
			sum += m1*1000 + 10000;
			if(max < sum)
			{
				max =sum;
			}
		}
		else if(m1 == m2)
		{
			sum+= 1000+ m1*100;
			if(max < sum)
			{
				max =sum;
			}
		}
		else if(m1 == m3)
		{
			sum+= 1000+ m1*100;
			if(max < sum)
			{
				max =sum;
			}
		}
		else if(m3 == m2)
		{
			sum+= 1000+ m2*100;
			if(max < sum)
			{
				max =sum;
			}
		}
		else 
		{
			tmp = m1;
			if(m2 > tmp)
				tmp = m2;
			if(m3 > tmp)
				tmp = m3;
			sum += tmp*100;
			if(max < sum)
			{
				max =sum;
			}
		}
	}


	printf("%d\n",max);
	return 0;
}