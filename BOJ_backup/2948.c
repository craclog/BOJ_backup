#include<stdio.h>

int main()
{
	int m,d,i;
	int days[13];
	int sum=0;
	days[1] = 31;
	days[2] = 28;
	days[3] = 31;
	days[4] = 30;
	days[5] = 31;
	days[6] = 30;
	days[7] = 31;
	days[8] = 31;
	days[9] = 30;
	days[10] = 31;
	days[11] = 30;
	days[12] = 31;
	
	scanf("%d %d",&d,&m);
	for(i=1 ; i<m ; i++)
	{
		sum+=days[i];
	}
	sum+=d;

	switch(sum%7)
	{
	case 6:
		printf("Tuesday\n");
		break;
		
	case 0:
		printf("Wednesday\n");
		break;
		
	case 1:
		printf("Thursday\n");
		break;
		
	case 2:
		printf("Friday\n");
		break;
		
	case 3:
		printf("Saturday\n");
		break;
		
	case 4:
		printf("Sunday\n");
		break;
		
	case 5:
		printf("Monday\n");
		break;
	}

	


	return 0;
}