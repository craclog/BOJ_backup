#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#define MIN(x,y) ( (x)>(y) ? (x):(y) )
#define SWAP(x,y) { int t; (t) = (x); (x) = (y); (y) = (t); }

// If str = zzzzabbbbaqqq, How can i Solve it
//brutal Force
void Sswap(char str[],int start,int end){
    int i;
    int range = (end-start+1)/2;
    
    for(i=0; i<range; i++){
        SWAP(str[start+i],str[end-i]);
    }
}
char* Trans(char str[], int a, int b){
    char* tmp;
    int len;
    len = strlen(str);
    tmp = (char*)malloc(sizeof(char)*100);
    strcpy(tmp,str);
    Sswap(tmp,0,a);
    Sswap(tmp,a+1,b);
    Sswap(tmp,b+1,len-1);
    return tmp;
}

int main(){
    int i,j,k;
    int len;
    char str[100];
    char* result = (char*)malloc(sizeof(char)*100);
    int point[3];
    
    scanf("%s",str);
    len = strlen(str);
    strcpy(result,Trans(str,len-2,len-1));
    //printf("%s\n",result);
    for(i=0; i<len-2; i++)
        for(j = i+1; j<len-1; j++){
                point[0] = i;
                point[1] = j;
                if(strcmp(result,Trans(str,point[0],point[1])) > 0){
                    strcpy(result,Trans(str,point[0],point[1]));
                    //printf("%d %d %d\n",point[0],point[1],point[2]);
                    //printf("Chaneged : %s\n",result);
                }
            }
    
    
    
    
    printf("%s\n",result);
    
    return 0;
}