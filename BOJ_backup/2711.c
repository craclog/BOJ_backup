#include<stdio.h>
#include<stdlib.h>
int main(){
    
    int tc;
    char str[85];
    int point;
    int i,j;
    
    scanf("%d",&tc);
    getchar();
    while(tc--){
        scanf("%d",&point);
        getchar();
        
        
        fgets(str,sizeof(str),stdin);
        
        for(i=0;i<point-1;i++){
            
            printf("%c",str[i]);
        }
        
        for(i=point;i<strlen(str);i++){
            
            printf("%c",str[i]);
        }
        
        
        
        
    }
    
    
    
    return 0;
}