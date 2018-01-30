#include<stdio.h>

void setArr(int* arr){
    int i;
    for(i=0;i<14;i++){
        arr[i] = 0;
    }
}

int main(){
    char arr[15];
    int tc = 5;
    int i;
    int flag = -1;
    
    while(tc--){
        fgets(arr, sizeof(arr)/sizeof(char), stdin);
        for(i=0;i<8;i++){
            if(arr[i] == 'F' && arr[i+1] == 'B' && arr[i+2] == 'I'){
                printf("%d ",5-tc);
                flag = 1;
            }
        }    
    }
    if(flag < 0)
        printf("HE GOT AWAY!\n");
    return 0;
}