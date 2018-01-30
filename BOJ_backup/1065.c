#include<stdio.h>

int main()

{
	int n;
	int count=0;
	
	scanf("%d",&n);
	if(n<100)count=n;
	else if(100<=n && n<1000)
	{
		count+=99;
		for(;100<=n;n--)
		{
			if(n/100-n%100/10 == n%100/10 - n%10) count++;
		}
	}
	else {
		count+=99;
		n--;
	for(;100<=n;n--)
		{
			if(n/100-n%100/10 == n%100/10 - n%10) count++;
		}
	}
	printf("%d\n",count);
	return 0;
}

	