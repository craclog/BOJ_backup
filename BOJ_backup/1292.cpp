#include <stdio.h>

int main() {
        
	int a,b;
	int i,j;
	int sum1=0,sum2=0,count1=0,count2=0;
	scanf("%d %d",&a,&b);

	for(i =1 ; i< 60; i++)
	{
		if(count1==a-1) break;
		for(j=0 ; j < i ; j++)
		 {
			 sum1+=i;
			 count1++;
			if(count1==a-1) break;
		 }
	
	}
	
	for(i =1 ; i< 60; i++)
	{
		if(count2==b) break;
		for(j=0 ; j < i ; j++)
		 {
			 sum2+=i;
			 count2++;
			if(count2==b) break;
		 }
	
	}

	printf("%d\n",sum2-sum1);

        return 0;
}
