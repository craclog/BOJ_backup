#include <stdio.h>
#include <string.h>
#define SWAP(x,y) { int t; (t) = (x); (x) = (y); (y) = (t); }
int isEmpty = 0;

void Reverse(int arr[], int start, int end){
    int i;
    int iLimit = (end-start+1)/2;
    if(start > end)
        return;
    for(i=0; i<iLimit; i++){
        SWAP(arr[start+i],arr[end-i]);
    }
}
void Delete(int* isErr, int* start, int* end, int direction){
    if(*start == *end)
        isEmpty = 1;
    if(*start > *end){
        //puts("error : No elements");
        *isErr = 1;
        return;
    }
    if(direction == 1) (*start)++;
    else (*end)--;
}

int main(){
    int i;
    int tc,n;
    int isErr;
    
    int direction;      //1 : front,   -1: back;
    char p[100001];
    int arr[100001];
    int arrIndex;
    int endIndex;
    int len_p;
    scanf("%d",&tc);
    getchar();
    while(tc--){
        direction = 1;
        arrIndex = 0;
        endIndex = 0;
        isErr = 0;
        isEmpty = 0;
        scanf("%s",p);
        len_p = strlen(p);
        getchar();
        scanf("%d",&n);
        endIndex = n-1;
        getchar();
        if(n==0) getchar();
        for(i=0; i<n; i++){
            getchar();
            scanf("%d",&arr[i]);
            //printf("arr[%d] : %d %c\n",i,arr[i],arr[i]);
        }
        getchar();
        for(i=0; i<len_p; i++){
            
            if(p[i] == 'R'){
                direction *= (-1);
            }
            else if(p[i] == 'D'){
                if(isErr == 1) break;
                Delete(&isErr,&arrIndex,&endIndex,direction);
            }
            else{
                puts("error");
                isErr = 1;
            } 
        }
        if(isErr){
            puts("error");
            continue;
        }
        //print
        //printf("arr,end : %d %d\n",arrIndex,endIndex);
        if(direction == -1)
            Reverse(arr,arrIndex,endIndex);
        if(endIndex < 0 || isEmpty == 1){
            puts("[]");
            continue;
        }
        
        else{
            printf("[");
            for(i=arrIndex; i<endIndex; i++){
                printf("%d,",arr[i]);
            }
            printf("%d]\n",arr[endIndex]);
        }
    }
    return 0;
}