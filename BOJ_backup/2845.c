#include<stdio.h>

int main()
{
	int i;
	int L,P;
	int pp;
	int a[5];

	scanf("%d%d",&L,&P);
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	pp = L*P;

	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]-pp);
	}
	printf("\n");

	return 0;
}