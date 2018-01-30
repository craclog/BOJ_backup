#include <stdio.h>
#include <string.h>



int main(){
    int i,j,k,len;
    int sIndex = 0, rIndex = 0;
    int dir = 1;
    char str[202];
    char rstr[202];
    char map[21][202];
    scanf("%d",&k);
    scanf("%s",str);
    len = strlen(str)/k;
    
    for(i=0; i<len; i++){
        if(dir){
            for(j=0; j<k; j++){
                map[i][j] = str[sIndex++];
            }
            dir = 0;
        }
        else{
            for(j=k-1; j>=0; j--){
                map[i][j] = str[sIndex++];
            }
            dir = 1;
        }
    }
    
    for(i=0; i<k; i++){
        for(j=0; j<len; j++){
            rstr[rIndex++] = map[j][i];
        }   
    }
    rstr[len*k] = '\0';
    printf("%s\n",rstr);
    /*
    for(i=0; i<len; i++){
        for(j=0; j<k; j++){
            printf("%c",map[i][j]);
        }  
        puts("");
    }
    */
    return 0;
}
