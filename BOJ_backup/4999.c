#include<stdio.h>
#include<stdlib.h>

int main(){
    char str1[1005];
    char str2[1005];
    
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    if(strlen(str1)>=strlen(str2)) printf("go");
    else printf("no");
    
    
    return 0;
}