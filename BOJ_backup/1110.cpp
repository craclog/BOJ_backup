#include <stdio.h>
 
int main() {
 
    int a,b;
    int count=0,temp;
    int N1,N2;
    scanf("%d",&N1);
    a=N1/10;
	b=N1%10;
 
    for(;;)
    {
        count++;
        temp=a;
        a=b;
        b=(temp+b)%10;
        N2=10*a + b;

        if(N1==N2) break;
   
    }
    printf("%d\n",count);
    return 0;
}