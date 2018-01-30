#include <stdio.h>
char arr[100002];

int top = -1;
int main(){
    int i;
    int res = 0;
    scanf("%s",arr);
    for( i = 0; arr[i] != '\0'; i++){
        if( arr[i] == '(' ){
            
            top++;
        }
        else if( arr[i] == ')' ){
            if( i != 0 && arr[i-1] == '('){
                res += top;
            }
            else{
                res += 1;
            }
            top--;
        }
    }
    printf("%d\n",res);
    return 0;
}

