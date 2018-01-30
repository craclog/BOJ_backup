#include <stdio.h>

int main()
{
	int hour,nhour;
	int min,nmin;
	int sec,nsec;
	int need;
	int tmp;
	scanf("%d %d %d",&hour,&min,&sec);
	scanf("%d",&need);

	tmp = hour*3600 + min*60 + sec +need;
	if(tmp >= 24*3600)
	{
		tmp = tmp%(24*3600);
		nhour = tmp/3600;
		nmin = tmp%3600/60;
		nsec = tmp%60;
		printf("%d %d %d\n",nhour,nmin,nsec);
	}
	else
	{
		nhour = tmp/3600;
		nmin = tmp%3600/60;
		nsec = tmp%60;
		printf("%d %d %d\n",nhour,nmin,nsec);
	}
	
	return 0;
}