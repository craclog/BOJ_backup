#include<stdio.h>
#include<stdlib.h>

int main()
    {
    int n,i,j;
    char str[52];
    
    
    scanf("%d",&n);
    getchar();
    
    for(i=0;i<n;i++){
        fgets(str,sizeof(str),stdin);
    /*    
        for(j=0;j<strlen(str);j++){
        	nstr[j+3] = str[j];    
            
        }
        nstr[0] = i+1;
        nstr[1] = '.';
        nstr[2] = ' ';
        printf("%s",nstr);
      */
        printf("%d. ",i+1);
        printf("%s",str);
        
    }
    
    
    
    
    return 0;
}