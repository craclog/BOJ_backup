#include <stdio.h>
 
int main() {
 
    int x,y;
	int w,h;
	int a[4];
	int i,j;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	
	a[0]=x;
	a[1]=y;
	a[2]=w-x;
	a[3]=h-y;

	for(i=0 ; i<4 ; i++)
	{
		for(j=i; j<4 ; j++)
		{
			if(a[i]>a[j])
			{
				int tmp;
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	
	printf("%d\n",a[0]);
	

    return 0;
}