#include <stdio.h>

int main()
{
    int i,j;
    int a[3];
    int tmp;
 	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	for(i=0; i<3 ;i++)
    {
     for(j=i ; j<3 ; j++)
     {
         if(a[i]>a[j])
         {
            tmp = a[i];
             a[i] = a[j];
             a[j] = tmp;
         }
     }
    }
	printf("%d %d %d\n",a[0],a[1],a[2]);    
    return 0;
}