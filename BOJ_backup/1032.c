#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[50][52];
    char b[52];
    char cmp;
    int leng,n,i,j;
    
    
    scanf("%d",&n);
    getchar();
    for(i=0 ; i<n ; i++)
    {
        fgets(a[i],sizeof(a[i]),stdin);
        leng = strlen(a[i]);
        a[i][leng-1]=0;
        
    }
  
    strncpy(b,a[0],leng);
    
    for(j=0 ; j<leng-1 ; j++)
    {
        cmp=a[0][j];
        for(i=0 ; i<n ; i++)
            if(cmp!=a[i][j])
            b[j]='?';
        
    }
    printf("%s\n",b);
    
 return 0;   
}