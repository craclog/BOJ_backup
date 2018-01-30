#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int data;
    struct _node* next;
    struct _node* prev;
}node;

typedef node* nptr;

typedef struct _deque{
    int count;
    node* head;
    node* tail;
}deque;

void InitDeque(deque* dptr);
void Push_front(deque* dptr, int data);
void Push_back(deque* dptr, int data);
int Pop_front(deque* dptr);
int Pop_back(deque* dptr);
int GetSize(deque* dptr);
int IsEmpty(deque* dptr);
int Front(deque* dptr);
int Back(deque* dptr);

int main(){
    int i,n;
    int input,output;
    char order[15];
    deque* dptr = (deque*)malloc(sizeof(deque));
    InitDeque(dptr);
    
    scanf("%d",&n);
    getchar();
    while(n--){
        scanf("%s",order);
        
        if(!strncmp(order,"push_front",10)){
            scanf("%d",&input);
            Push_front(dptr,input);
        }
        else if(!strncmp(order,"push_back",9)){
            scanf("%d",&input);
            Push_back(dptr,input);
        }
        else if(!strncmp(order,"pop_front",9)){
            printf("%d\n",Pop_front(dptr));
        }
        else if(!strncmp(order,"pop_back",8)){
            printf("%d\n",Pop_back(dptr));
        }
        else if(!strncmp(order,"size",4)){
            printf("%d\n",GetSize(dptr));
        }
        else if(!strncmp(order,"empty",5)){
            printf("%d\n",IsEmpty(dptr));
        }
        else if(!strncmp(order,"front",5)){
            printf("%d\n",Front(dptr));
        }
        else if(!strncmp(order,"back",4)){
            printf("%d\n",Back(dptr));
        }
        else
            puts("input ERR");
    }
    
    return 0;
}

void InitDeque(deque* dptr){
    nptr new_node = (nptr)malloc(sizeof(node));
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->data = -1;
    dptr->count = 0;
    dptr->head = new_node;
    dptr->tail = new_node;
}
void Push_front(deque* dptr, int data){
    nptr new_node = (nptr)malloc(sizeof(node));
    new_node->data = data;
    
    new_node->prev = dptr->head;
    new_node->next = dptr->head->next;
    if(dptr->count == 0)
        dptr->tail = new_node;
    if(dptr->head->next != NULL)
        dptr->head->next->prev = new_node;
    dptr->head->next = new_node;
    dptr->count++;
    //printf("push_front : %d\n",data);
}   
void Push_back(deque* dptr, int data){
    nptr new_node = (nptr)malloc(sizeof(node));
    new_node->data = data;
    
    new_node->prev = dptr->tail;
    new_node->next = NULL;
    
    dptr->tail->next = new_node;
    dptr->tail = new_node;
    dptr->count++;
    //printf("push_back : %d\n",data);
}
int Pop_front(deque* dptr){
    nptr tmp;
    int res;
    
    if(dptr->count < 1)
        return -1;
    tmp = dptr->head->next;
    
    if(tmp->next != NULL)
        tmp->next->prev = dptr->head;
    if(tmp->next == NULL)
        dptr->tail = dptr->head;
    dptr->head->next = tmp->next;
    
    res = tmp->data;
    free(tmp);
    //printf("Poped : %d\n",res);
    dptr->count--;
    return res;
}
int Pop_back(deque* dptr){
    nptr tmp;
    int res;
    
    if(dptr->count < 1)
        return -1;
    tmp = dptr->tail;
    tmp->prev->next = NULL;
    dptr->tail = tmp->prev;
    res = tmp->data;
    free(tmp);
    //printf("Poped : %d\n",res);
    dptr->count--;
    return res;
}
int GetSize(deque* dptr){
    return dptr->count;
}
int IsEmpty(deque* dptr){
    if(dptr->count == 0)
        return 1;
    else return 0;
}
int Front(deque* dptr){
    if(dptr->count != 0)
        return dptr->head->next->data;
    else return -1;
}
int Back(deque* dptr){
    if(dptr->count != 0)
        return dptr->tail->data;
    else return -1;
}