#include <stdio.h>

int main(){
    
    int repeat;
    int tc,i;
    char tmp;
    scanf("%d",&tc);
    getchar();
    while(tc--){
        scanf("%d",&repeat);
        getchar();
        while(1){
            scanf("%c",&tmp);
            if(tmp == '\n' || tmp == '\0')
                break;
            for(i=0; i<repeat; i++){
                printf("%c",tmp);
            }
        }
        puts("");
    }
    
    
    return 0;
}