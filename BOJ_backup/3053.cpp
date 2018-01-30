#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
double r;
double s1,s2;

    scanf("%lf",&r);
s1 = (M_PI)*r*r;
s2 = 2*r*r;

printf("%.6lf\n%.6lf\n",s1,s2);
return 0;
}