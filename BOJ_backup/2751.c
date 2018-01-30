#include <stdio.h>
#include <stdlib.h>
//Divide and Conquer

void merge(int Dataset[], int start, int middle, int end){
    int i;
    int LeftIndex = start;
    int RightIndex = middle+1;
    int DestIndex = 0;
    
    int* Destination = (int*)malloc(sizeof(int)*(end-start+1));
    
    while(LeftIndex <= middle && RightIndex <= end){
        if(Dataset[LeftIndex] < Dataset[RightIndex]){
            Destination[DestIndex] = Dataset[LeftIndex];
            LeftIndex++;
        }
        else{
            Destination[DestIndex] = Dataset[RightIndex];
            RightIndex++;
        }
        DestIndex++;
    }
    while(LeftIndex <= middle)
        Destination[DestIndex++] = Dataset[LeftIndex++];
    while(RightIndex <= end)
        Destination[DestIndex++] = Dataset[RightIndex++];
    
    DestIndex = 0;
    for(i=start; i<=end; i++){
        Dataset[i] = Destination[DestIndex++];
    }
    
    free(Destination);
}
void mergesort(int Dataset[], int start, int end){
    int middle = (start+end)/2;
    if(end-start < 1)
        return;
    
    mergesort(Dataset,start,middle);
    mergesort(Dataset,middle+1, end);
    
    merge(Dataset,start,middle,end);
}

int main(){
    int n,i;
    int arr[1000000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
    for(i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}