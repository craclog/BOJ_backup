#include <stdio.h>

int main()
{
    int i,j,n;
    int a[1000];
    int tmp;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
     scanf("%d",&a[i]);   
    }
	for(i=0; i<n ;i++)
    {
     for(j=i ; j<n ; j++)
     {
         if(a[i]>a[j])
         {
            tmp = a[i];
             a[i] = a[j];
             a[j] = tmp;
         }
     }
    }
	for(i=0; i<n ; i++)
    printf("%d\n",a[i]);    
    return 0;
}