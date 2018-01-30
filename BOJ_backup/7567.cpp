#include <stdio.h>

int main()
{
	int i;
	int h=10;
	char dish[50]={0,};
	for(i=0; i <50 ; i++)
	{
		scanf("%c",&dish[i]);
		if(dish[i] == '\n') 
		{
			dish[i]='\0';
			break;
		}
	}
	/*for(i=0 ; i<50 ; i++)
	{
		if(dish[i] == '\0') break;
		printf("%c",dish[i]);
	}
	printf("\n");
	*/
	for(i=0 ; i<49 ; i++)
	{
		if(dish[i] == '\0' || dish[i+1]== '\0') break;
		else if(dish[i] == dish[i+1]) h+=5;
		else h+=10;
	}

	printf("%d\n",h);


	return 0;
}