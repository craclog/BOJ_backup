#include <stdio.h>
#include <string.h>

int main(){
    int i;
    int len;
    char arr[600];
    int can = 1;
    
    scanf("%s",arr);
    len = strlen(arr);
    
    for(i=0; i<len-3; i++){
        if(arr[i] == arr[i+1] &&
           arr[i] == arr[i+2] &&
           arr[i] == arr[i+3] &&
           arr[i] == 'X')
           {
                arr[i] = arr[i+1] = arr[i+2] = arr[i+3] = 'A';
           }
    }
    //printf("%s\n",arr);
    for(i=0; i<len-1; i++){
        if(arr[i] == arr[i+1] &&
            arr[i] == 'X')
            {
                arr[i] = arr[i+1] = 'B';
            }
    }
    //printf("%s\n",arr);
    for(i=0; i<len; i++){
        if(arr[i] == 'X')
            can = 0;
    }
    if(can == 1){
        printf("%s\n",arr);
    }
    else puts("-1");
    return 0;
}