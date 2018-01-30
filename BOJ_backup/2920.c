#include<stdio.h>
#include<stdlib.h>

int main()
{
	char asce[] = "1 2 3 4 5 6 7 8";
	char desc[] = "8 7 6 5 4 3 2 1";
	char arr[20];
	//char a[] ="qw";
	//char b[]="qw";
	//char c[]="qe";
	fgets(arr,sizeof(arr),stdin);
	arr[15] = 0;
	if(strcmp(arr,asce) == 0)
	{
		printf("ascending\n");
		return 0;
	}
	else if(strcmp(arr,desc) == 0)
	{
		printf("descending\n");
		return 0;
	}
	else printf("mixed\n");


	//printf("%d\n",strcmp(a,b));
	//printf("%d\n",strcmp(a,c));


	return 0;
}