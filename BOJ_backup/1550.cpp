#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
 
int main()
{
    int i,j,cnt=1;
    int sum=0,tmp;
    int a[7];
    char arr[7];
    char c;
/*    for(i=0 ; i<7 ; i++)
    {
        scanf("%c",&c);
        if(c == '\n')
            break;
        else
            arr[i] = c;
    }
	*/
	scanf("%s",arr);
	i = strlen(arr);
    for(j=0 ; j<i ; j++)
    {
 
        if(arr[j] == 'A')
            a[j] = 10;
        else if(arr[j] == 'B')
            a[j] = 11;
        else if(arr[j] == 'C')
            a[j] = 12;
        else if(arr[j] == 'D')
            a[j] = 13;
        else if(arr[j] == 'E')
            a[j] = 14;
        else if(arr[j] == 'F')
            a[j] = 15;
        else if(arr[j] == '1')
            a[j] = 1;
        else if(arr[j] == '2')
            a[j] = 2;
        else if(arr[j] == '3')
            a[j] = 3;
        else if(arr[j] == '4')
            a[j] = 4;
        else if(arr[j] == '5')
            a[j] = 5;
        else if(arr[j] == '6')
            a[j] = 6;
        else if(arr[j] == '7')
            a[j] = 7;
        else if(arr[j] == '8')
            a[j] = 8;
        else if(arr[j] == '9')
            a[j] = 9;
        else if(arr[j] == '0')
            a[j] = 0;
 
 
    }
 
    for(j=0 ; j< i ; j++)
    {
		tmp = a[i-j-1]*cnt;
        sum += a[i-j-1]*cnt;
        cnt *= 16;
    }
    printf("%d\n",sum);
    return 0;
}