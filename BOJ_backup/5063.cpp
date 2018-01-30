#include <stdio.h>

int main() {
        int testcase;
                scanf("%d",&testcase);
        while ( testcase-- ) {
       
            
            int r,e,c;

	scanf("%d %d %d",&r,&e,&c);
	if(e-c>r) printf("advertise\n");
	if(e-c==r) printf("does not matter\n");
	if(e-c<r) printf("do not advertise\n");

            
            
            
            
        }
        return 0;
}		
		
		
		
		
		
		
		
		
		
		
		
		
		
		