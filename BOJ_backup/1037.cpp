#include <stdio.h>

int main() {

	int i,j,n,N;
	int a[49];



	scanf("%d",&n);
	for(i=0 ; i< n; i++)
	{
		scanf("%d",&a[i]);
	}

	for(int i=0 ; i<n ; i++) 
{
	for(int j=i ; j<n ; j++)
	{
		if(a[i]>a[j]) 
		{int tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		}
	}
}

	if(n%2==0) printf("%d\n",a[0]*a[n-1]);
	else printf("%d\n",a[(n-1)/2]*a[(n-1)/2]);


return 0;
}