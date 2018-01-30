#include<stdio.h>


int main()
{
	int i;
	int tmp=1;
	int n,c;
	int tmp2=0;
	int res;
	scanf("%d %d",&n,&c);

	for(i=0;i<c;i++)
		tmp*=10;

	tmp2 = n%tmp/(tmp/10);
	if(tmp2>=5)
		res = (n/tmp +1)*tmp;
	else
		res = (n/tmp)*tmp;

	printf("%d\n",res);





	return 0;
}