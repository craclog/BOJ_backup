#include <stdio.h>

int main() {
        int testcase;
                scanf("%d",&testcase);
        while ( testcase-- ) {
            
       
		int q,w,e,r,t,y,u;
int sum;
int min;

sum=0;
min=9999999999;
scanf("%d %d %d %d %d %d %d", &q,&w,&e,&r,&t,&y,&u);

if(q%2==0){sum=sum+q; if(min>q)min=q;}
if(w%2==0){sum=sum+w; if(min>w)min=w;}
if(e%2==0){sum=sum+e; if(min>e)min=e;}
if(r%2==0) {sum=sum+r; if(min>r)min=r;}
if(t%2==0) {sum=sum+t; if(min>t)min=t;}
if(y%2==0) {sum=sum+y; if(min>y)min=y;}
if(u%2==0) {sum=sum+u; if(min>u)min=u;}

printf("%d %d\n", sum, min);



		
		
		
		
		
		
		
		}
        return 0;
}		