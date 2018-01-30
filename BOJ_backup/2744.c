#include<stdio.h>
#include<stdlib.h>
int main()
{
 	char a[101];
    int i;
    scanf("%s",a);
    for(i=0 ; i<strlen(a) ; i++)
    {
    	if(a[i]<='Z' && a[i]>='A')
            a[i] += ('a'-'A');
        else if(a[i]<='z' && a[i]>='a')
            a[i] -= ('a'-'A');
    }
    printf("%s\n",a);
    
    
    return 0;
}