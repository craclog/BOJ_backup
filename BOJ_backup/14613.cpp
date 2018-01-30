#include <cstdio>
long long fac[21];
double sol(double a, int n) {
	double tmp = 1;
	for (int i = 0; i < n; i++)
	{
		tmp *= a;
	}
	return tmp;
}
long long sol2(int w, int l, int d) {
	return fac[20]/(fac[w]*fac[l]*fac[d]);
}
int main() {
	double w,l,d;
	double win =0 , lose= 0, draw= 0;
	double bro = 0, sil =0 , gol = 0 , pla = 0, dia =0;
	scanf("%lf %lf %lf", &w, &l,&d);
	fac[0] = 1;
	for (int i = 1; i <= 20; i++) {
		fac[i] = fac[i-1] * i;
	}
	for (int i = 0; i <= 20; i++)
	{
		for (int j = 0; j+i <= 20; j++)
		{
			int k = 20 - i - j;
			double score = 2000 + 50 * i + (-50)*j;
			double cur = (double)sol2(i, j, k);
			cur *= sol(w, i) * sol(l, j) * sol(d, k);
			if (1000 <= score && score <= 1499) bro += cur;
			if (1500 <= score && score <= 1999) sil += cur;
			if (2000 <= score && score <= 2499) gol += cur;
			if (2500 <= score && score <= 2999) pla += cur;
			if (3000 <= score && score <= 3499) dia += cur;
		}
	}
	printf("%.8lf\n", bro);
	printf("%.8lf\n", sil);
	printf("%.8lf\n", gol);
	printf("%.8lf\n", pla);
	printf("%.8lf\n", dia);
	return 0;
}