#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int data;
    struct _node* next;
}node;

typedef node* nptr;

typedef struct _queue{
    nptr head;
    nptr tail;
    int count;
}Queue;

void InitQue(Queue* myQue){
    myQue->head = NULL;
    myQue->tail = NULL;
    myQue->count = 0;
}
void Push(Queue* myQue, int data){
    nptr new_nptr = (nptr)malloc(sizeof(node));
    new_nptr->data = data;
    new_nptr->next = NULL;
    
    if(myQue->count == 0)
        myQue->head = new_nptr;
    else
        myQue->tail->next = new_nptr;
        
    myQue->tail = new_nptr;
    
    myQue->count++;
    //printf("%d\n",data);
}
int Pop(Queue* myQue){
    nptr tmp;
    int result;
    if(myQue->count < 1){
        return -1;
    }
    tmp = myQue->head;
    result = tmp->data;
    myQue->head = myQue->head->next;
    free(tmp);
    myQue->count--;
    return result;
}
int Size(Queue* myQue){
    return myQue->count;
}
int IsEmpty(Queue* myQue){
    if(myQue->count == 0)
        return 1;
    else return 0;
}
int Front(Queue* myQue){
    int res;
    if(myQue->count < 1)
        return -1;
    res = myQue->head->data;
    return res;
}
int Back(Queue* myQue){
    int res;
    if(myQue->count < 1)
        return -1;
    res = myQue->tail->data;
    return res;
}

int main(){
    int i,n;
    int input;
    char order[10];
    Queue* qptr = (Queue*)malloc(sizeof(Queue));
    InitQue(qptr);
    scanf("%d",&n);
    while(n--){
        scanf("%s",order);
        getchar();
        if(!strncmp(order,"push",4)){
            scanf("%d",&input);
            Push(qptr,input);
        }
        else if(!strncmp(order,"pop",3)){
            printf("%d\n",Pop(qptr));
        }
        else if(!strncmp(order,"size",4)){
            printf("%d\n",Size(qptr));
        }
        else if(!strncmp(order,"empty",5)){
           printf("%d\n",IsEmpty(qptr));
        }
        else if(!strncmp(order,"front",5)){
            printf("%d\n",Front(qptr));
        }
        else if(!strncmp(order,"back",4)){
            printf("%d\n",Back(qptr));
        }
        else
            puts("INPUT ERR");
    }
    
    
    return 0;
}