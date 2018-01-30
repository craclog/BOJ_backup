#include <stdio.h>
int MAX(int arr[], int start, int end){
    int max = arr[start];
    int i;
    for(i=start; i<=end; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
void Print(int arr[], int start, int end){
    int i;
    for(i=start; i<=end; i++){
        printf("%d ",arr[i]);
    }
    puts("");
}
int main(){
    int i,tc,n,m;
    int max;
    char tmp;
    int arrIndex;
    int head,tail,count;
    int importance[100001] = {0};
    scanf("%d",&tc);
    while(tc--){
        scanf("%d%d",&n,&m);
        max = -1;
        count = 0;
        head = 0;
        tail = n-1;
        for(i=0; i<n; i++){
            scanf("%d",&importance[i]);
            if(max < importance[i]) max = importance[i];
        }
        while(1){
            while(importance[head] != max){
            
                if(m == head)
                    m = tail+1;
                tail++;
                importance[tail] = importance[head];
                head++;

            }
            //scanf("%c",&tmp);
            //printf("POP : %d\n",importance[head]);
            count++;
            if(m == head)
                break;
            head++;
            n--;
            //printf("Head : %d, Tail : %d, M : %d\n",head,tail,m);
            //Print(importance,head,tail);
            max = MAX(importance,head,tail);
            //printf("MAx : %d\n",max);
        }
        printf("%d\n",count);
    }
    return 0;
}