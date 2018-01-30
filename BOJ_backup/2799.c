#include<stdio.h>

char arr[510][510];
int i,j;
int n,m;
int result[6] = {0,};

void cnt(int i,int j){
    if(arr[i][j] == '*'){
        result[4]++;
        return;    
    }
    else if(arr[i-1][j] == '*'){
        result[3]++;
        return;    
    }
    else if(arr[i-2][j] == '*'){
        result[2]++;
        return;    
    }
    else if(arr[i-3][j] == '*'){
        result[1]++;
        return;    
    }
    else{
        result[0]++;
        return;    
    }
}

int main(){
    
    scanf("%d %d",&m,&n);
    getchar();
    for(i = 0; i<m*5+1; i++){
        for(j = 0; j<n*5+1; j++){
            scanf("%c",&arr[i][j]);
        }
        getchar();
    }
    
    for(i = 0; i<m; i++)
        for(j = 0; j<n; j++){
            cnt(i*5+4,j*5+1);
        }
        
    for(i=0;i<5;i++)
        printf("%d ",result[i]);
    printf("\n");
    /*
    for(i=0;i<m*5+1;i++){
        for(j=0;j<n*5+1;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    */
    
    return 0;
}