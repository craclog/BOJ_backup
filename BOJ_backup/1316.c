#include <stdio.h>
#include <string.h>

int main(){
    int i;
    int n;
    int len;
    int isAnswer;
    int count = 0;
    char str[103];
    char last;
    int check[150]; //97~122
    scanf("%d",&n);
    getchar();
    
    while(n--){
        for(i=0; i<150; i++)
            check[i] = 0;
        last = 0;
        isAnswer = 1;
        
        
        scanf("%s",str);
        len = strlen(str);
        //continuing : 1, finished : 2
        for(i=0; i<len; i++){
            if(i == 0){
                last = str[0];
                check[last] = 1;
            }   
            else    last = str[i-1];
            //printf("Cur : %c/%d,  Last : %c/%d\n",str[i],check[str[i]],last,check[last]);
            
            if(str[i] != last){

                if(check[str[i]] == 2){
                    isAnswer = 0;
                    //printf("ISN'T\n");
                    break;
                }
                else{
                    check[last] = 2;
                }
                
            }
            else{
                
            }
            
            
        }
        if(isAnswer)
            count++;
        //printf("Is? : %d\n",isAnswer);
    }
    printf("%d\n",count);
    
    
    return 0;
}
