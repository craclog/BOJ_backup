#include<stdio.h>

int main() {


double N,M;

scanf("%lf %lf",&N,&M);

if(N>=M) printf("%.lf",N-M);
else printf("%.lf",M-N);




	return 0;
}