#include <stdio.h>
int ppow(a,x){
    int result = 1;
    int i;
    for(i=0; i<x; i++)
        result *= a;
    return result;
}

int main(){
    int n,m;
    int i,tmp;
    int ndigit;
    
    scanf("%d%d",&n,&m);
    tmp = n;
    for(i=0;i<4;i++){
        tmp = tmp/10;
        if(tmp == 0)
            break;
    }
    ndigit = i+1;
    if(ndigit*n<m){
        for(i=0 ; i<n; i++){
            printf("%d",n);
        }
        puts("");
    }
    else{
        for(i=0; i<(m/ndigit); i++){
            printf("%d",n);
        }
        switch(m%ndigit){
            case 1:
                printf("%d",n/ppow(10,ndigit-1));
                break;
            case 2:
                printf("%d",n/ppow(10,ndigit-2));
                break;
            case 3:
                printf("%d",n/ppow(10,ndigit-3));
                break;
            case 0:
                break;
        }
        puts("");
    }
    return 0;
}