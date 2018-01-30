#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n,i,j;
    char str[1003][105];
    int drop;
    while(1){
        drop=0;
        scanf("%d",&n);
        if(n==0)
            return 0;
    	getchar();
    	
        //초기화
        for(i=0;i<1002;i++){
            for(j=0;j<104;j++){
                str[i][j] = 0;
            }
        }
        
        
        for(i=0;i<n;i++){
       		fgets(str[i],sizeof(str[i]),stdin);
        	str[i][strlen(str[i]) - 1] = 0;
        	//printf("%d : %s!\n",i,str[i]);
    	}
    	// 스페이스바에서 떨어트리기
        for(i=0;i<n;i++){
            for(j=drop;j<=strlen(str[i]);j++){
                if(str[i][j]==' ' || str[i][j]==0){
                    drop = j;
                    break;
                }
            }
        }
        printf("%d\n",drop+1);
        
    }

    
    
    
    return 0;
}