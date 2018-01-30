#include<stdio.h>


int main()
{
	int i;
	char arr[10];
	char A[4],B[4];
	int a,b;

	fgets(arr,sizeof(arr),stdin);
	for(i=0;i<3;i++)
	{
		A[2-i] = arr[i];
	}
	A[3] = 0;
	for(i=0;i<3;i++)
	{
		B[2-i] = arr[i+4];
	}
	B[3] = 0;
	//printf("%s\n",A);
	//printf("%s\n",B);


	a = (A[0]-'0')*100 + (A[1]-'0')*10 + (A[2]-'0');
	b = (B[0]-'0')*100 + (B[1]-'0')*10 + (B[2]-'0');

	
	printf("%d\n",a>b ? a:b);





	return 0;
}