#include<stdio.h>

int main(){
    int cnt=0,i;
    char str[35];
    
    
    while(1){
        cnt=0;
        fgets(str,sizeof(str),stdin);
        if(str[0]=='#')
            break;
        
        for(i=0;i<strlen(str);i++){
            if(str[i]=='1'){
                cnt++;
            }  
        }
        //printf("%d!%c!\n",cnt,str[strlen(str)-2]);
        if(cnt%2==0 && str[strlen(str)-2] == 'e'){
                str[strlen(str)-2] = '0';
            }
            else if(cnt%2==0 && str[strlen(str)-2] == 'o')
                str[strlen(str)-2] = '1';
            else if(cnt%2==1 && str[strlen(str)-2] == 'e')
                str[strlen(str)-2] = '1';
            else if(cnt%2==1 && str[strlen(str)-2] == 'o')
                str[strlen(str)-2] = '0';
        printf("%s",str);
        
    }
    
    
    
    
    return 0;
}