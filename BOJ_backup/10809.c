#include <stdio.h>
#include <string.h>
int main(){

    char str[102];
    char tmp = '0';
    int i, index = 0;
    int len;
    int arr[102];
    for(i=0;i<101;i++){
        arr[i] = -1;
    }
    
    scanf("%s",str);
    len = strlen(str);

    for(i=0;i<len;i++){
        if(arr[str[i]-97] == -1)
            arr[str[i]-97] = index;
        index++;
    }
    for(i=0; i<26; i++){
        printf("%d ",arr[i]);
    }

    puts("");
    
    return 0;
}