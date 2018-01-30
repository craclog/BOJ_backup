#include <stdio.h>

int main() {
        int testcase;
		int n;
        
		scanf("%d",&testcase);
        while ( testcase-- ) {
        int a=0,b=1,c=0,i;
		int w=0,e=1,r=0;
			scanf("%d",&n);

			
			 

		for(i=0 ; i<n ; i++)
		{
			c=a+b;
			a=b;
			b=c;
		}

		for(i=0 ; i<n-1 ; i++)
		{
			r=w+e;
			w=e;
			e=r;
		}
		 if(n==0) w=1;
		printf("%d %d\n",w,a);

		
		
		
		}
        return 0;
}
