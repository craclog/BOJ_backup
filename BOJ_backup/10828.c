#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 *
 */

typedef struct _node{
    int value;
    struct _node *next;
}node;

typedef node* nptr;

typedef struct _stack{
    int count;
    nptr top;
}stack;

void init(stack* sptr){
    sptr->count = 0;
    sptr->top = NULL;
}
void push(stack* sptr, int data){
    nptr new_nptr = (nptr)malloc(sizeof(node));
    new_nptr->value = data;
    new_nptr->next = sptr->top;
    sptr->top = new_nptr;
    sptr->count++;
    return ;
}
int pop(stack* sptr){
    int result;
    nptr tmp;
    if(sptr->count > 0){
        tmp = sptr->top;
        result = tmp->value;
        sptr->top = tmp->next;
        free(tmp);
        sptr->count--;
        printf("%d\n",result);
        return result;
    }
    else{
        printf("-1\n");
    }
}
void print_size(stack* sptr){
    printf("%d\n",sptr->count);
}
void isEmpty(stack *sptr){
    if(sptr->count == 0)
        printf("1\n");
    else printf("0\n");
}
void print_top(stack* sptr){
    int result;
    if(sptr->count > 0){
        result = sptr->top->value;
        printf("%d\n",result);
    }
    else
        puts("-1");
    return ;
}
int main(){
    
    stack* mystack = (stack*)malloc(sizeof(stack));
    int tc;
    char order[20];
    int tmp;
    init(mystack);
    
    scanf("%d",&tc);
    while(tc--){
        scanf("%s",order);
        getchar();
        if(!strcmp(order,"top")){
            print_top(mystack);
        }
        else if(!strcmp(order,"pop")){
            pop(mystack);
        }
        else if(!strcmp(order,"size")){
            print_size(mystack);
        }
        else if(!strcmp(order,"empty")){
            isEmpty(mystack);
        }
        else if(!strncmp(order,"push", 4)){
            scanf("%d",&tmp);
            push(mystack,tmp);
        }
        else
            puts("ERROR");

    }

    return 0;
}