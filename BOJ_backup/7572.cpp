#include <stdio.h>

int main()
{
	int year;
	int tmp;
	int gan;
	int ezi;
	scanf("%d",&year);

	if(year >= 2013)
		tmp = (year-2013)%60;
	else tmp = 60 - (2013-year)%60;
		gan = (9 + tmp%10)%10;
		ezi = (('F' + tmp%12) - 'A')%12 + 'A';
		printf("%c%d\n",ezi,gan);
	
	return 0;
}