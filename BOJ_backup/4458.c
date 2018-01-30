#include<stdio.h>

int main(){
    int n,i;
    char str[33];
    
    scanf("%d",&n);
    getchar();
    
    while(n--){
        fgets(str,sizeof(str),stdin);
        //printf("!%c!\n",str[0]);
        if(str[0]>='a' && str[0]<='z'){
         	str[0] = str[0]+'A'-'a';
           // printf("%c!!!\n",str[0]);
        }
        printf("%s",str);
        for(i=0;i<30;i++)
            str[i] = 0;
    }
    
    
    
    return 0;
}