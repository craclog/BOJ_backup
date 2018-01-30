#include <stdio.h>
#include <stdlib.h>

int compare (const void *first, const void *second){
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else 
        return 0;
}

int main(){
    int i;
    int arr1[200001];
    int arr2[200001];
    int index1 = 0, index2 = 0;
    int n,m;
    int common = 0;
    scanf("%d%d",&n,&m);
    
    for(i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    for(i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    qsort(arr1,n,sizeof(int),compare);
    qsort(arr2,m,sizeof(int),compare);
    
    while(index1 < n && index2 < m){
        if(arr1[index1] > arr2[index2]){
            index2++;
        }
        else if(arr1[index1] < arr2[index2]){
            index1++;
        }
        else{
            common++;
            index1++;
            index2++;
        }
    }
    
    printf("%d\n",m+n-common-common);
    
    return 0;
}
