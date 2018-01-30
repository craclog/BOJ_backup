#include <stdio.h>

void push(int stack[], int* top, int data){
   if(*top>=100000){
       puts("Too many");
       return ;
   }
   (*top)++;
   stack[*top] = data;
   //printf("push: %d\n",data);
}
int pop(int stack[], int* top){
    int res;
    if(*top < 0){
        puts("None");
        return 0;
    }
    res = stack[*top];
    (*top)--;
    //printf("pop: %d\n",res);
    return res;
}

int main(){
    int i,j,n;
    int num = 1;
    int stack[100001] = {0,};
    int input[100001];
    char result[200001];
    int resIndex = 0;
    int top = -1;
    int isFirst = 1;
    scanf("%d",&n);
    //scanf("%d",&input[0]);
    //first push
   
    
    for(i=0; i<n; i++){
        scanf("%d",&input[i]);
        if(isFirst == 1){
            while(num <= input[i]){ 
                push(stack,&top,num);
                result[resIndex++] = '+';
                num++;
                //printf("[push]top : %d  input : %d\n",stack[top],input[i]);
            }
            isFirst = 0;
        }
        if(stack[top] < input[i]){
            
            while(stack[top] < input[i]){
                push(stack,&top,num);
                result[resIndex++] = '+';
                num++;
            }
        }
        if(stack[top] == input[i]){
            pop(stack,&top);
            result[resIndex++] = '-';
            //printf("[pop]top : %d  input : %d\n",stack[top],input[i]);
        }
        else if(stack[top] > input[i]){
            puts("NO");
            return 0;
        }
        
    }
    //printf("%d\n",resIndex);
    for(i=0; i<resIndex; i++){
        printf("%c\n",result[i]);
    }
    
    return 0;
}