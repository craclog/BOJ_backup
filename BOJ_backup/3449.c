#include<stdio.h>
#include<stdlib.h>
//#include<cstring> 씨플플용
int main()
{
char a[102],b[102];
    int res,i,leng;
    int tc;
    scanf("%d",&tc);
    getchar();
    
    while(tc--)
    {
       // memset( a,0, 102 );
       // memset( b,0, 102 );
    	res=0;
        fgets(a,sizeof(a),stdin);
        leng = strlen(a);
        a[leng-1] = 0;
        fgets(b,sizeof(b),stdin);
        leng = strlen(b);
        b[leng-1] = 0;
        
        for(i=0 ; i<leng-1; i++)
        {
        	if(a[i]!=b[i])
                res++;
        }
        
        printf("Hamming distance is %d.\n",res);
        
    }
    
    
    return 0;
}