#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int twice,sum=0;
	int n,i;
	int front,back;
	scanf("%d",&n);

	for(i=1 ; i<n+1 ; i++) //	1 3 6 10 15 21 28 36 ...
	{
		sum += i;
		if(n <= sum){
			sum -= i;
			break;
		}
	}
	if(i%2 ==0){
	front = n-sum;
	back = (i+1)-front;
	}
	else{
		back = n-sum;
		front = (i+1)-back;
	}
	printf("%d/%d\n",front,back);

	return 0;
}
