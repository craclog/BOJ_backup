#include<stdio.h>

int main()
{
	int i;
	int flag;
	double dap[4];
	double a,b,c,d;
	double max=0;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	dap[0] = a/c + b/d;
	dap[1] = c/d + a/b;
	dap[2] = d/b + c/a;
	dap[3] = b/a + d/c;

	for(i=0;i<4;i++)
	{
		if(max<dap[i])
		{
			max=dap[i];
			flag = i;
		}
		
	}
	printf("%d\n",flag);
	return 0;
}