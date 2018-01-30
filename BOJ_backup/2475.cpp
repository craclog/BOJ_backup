#include <stdio.h>

int main()  {

int a,b,c,d,e;
int sum;
int result;
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);	
sum=a*a+b*b+c*c+d*d+e*e;
result=sum%10;

printf("%d", result);

return 0;


}