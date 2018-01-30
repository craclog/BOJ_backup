#include <stdio.h>
//ACM 2163번 초콜릿 자르기
int main()
{
	int m,n;
	int tmp;
	int cnt=0;
	scanf("%d %d",&m,&n);
	if(m==1 && n==1)
		printf("%d\n",cnt);
	else if(m>1 || n>1)
	{
		if(m<n)
		{
			tmp = m;
			m=n;
			n=tmp;
		}
		cnt = m-1;
		cnt += (m)*(n-1);
		printf("%d\n",cnt);
	}


	return 0;
}