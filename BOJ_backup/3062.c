#include<stdio.h>
//수 뒤집기

void setArr(int *arr){
    int i;
    for(i=0;i<10;i++)
        arr[i] = 0;
}
void reverseArr(int* arr,int length){
    int i;
    int tmp;
    for(i=0;i<length/2;i++){
        tmp = arr[i];
        arr[i] = arr[length-i-1];
        arr[length-i-1] = tmp;
    }
}
int toArr(int* arr, int n){

    int i = 0;
    while(1){
        arr[i] = n%10;
        n /= 10;
        if(n == 0) break;
        ++i;
    }
    return i+1;
}
int toInt(int* arr, int length){
    int i;
    int res = 0;
    int digit = 1;
    for(i=0;i<length;i++){
        res += arr[i]*digit;
        digit *= 10;
    }
    return res;
}
int reverseNum(int*arr, int n){
    int res;
    int length;
    
    setArr(arr);
    length = toArr(arr,n);
    reverseArr(arr,length);
    res = toInt(arr,length);
    return res;
}
int main(){
    
    int tc,i,n;
    int res;
    int arr[10];
    int length = 0;
    
    scanf("%d",&tc);
    while(tc--){
        
        scanf("%d",&n);    
        res = reverseNum(arr,n) + n;
    
        if(res == reverseNum(arr,res)){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}