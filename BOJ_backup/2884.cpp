#include <stdio.h>

int main()
{
	int hour,nhour;
	int min,nmin;
	//int need;
	int tmp;
	scanf("%d %d",&hour,&min);
	//scanf("%d",&need);

	tmp = hour*60 + min - 45;
	if(tmp < 0)
	{
		tmp += 24*60;
		nhour = tmp/60;
		nmin = tmp%60;
		printf("%d %d\n",nhour,nmin);
	}
	else
	{
		nhour = tmp/60;
		nmin = tmp%60;
		printf("%d %d\n",nhour,nmin);
	}
	/*
	nhour = tmp/60;
	nmin = tmp%60;
	printf("%d %d\n",nhour,nmin);
	*/
	return 0;
}