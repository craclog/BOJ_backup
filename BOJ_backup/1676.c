#include<stdio.h>

int main(){
    
    int n;
    int i;
    int cnt=0;
    int tmp=0;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        tmp = i;
  		while(tmp%5==0){
            if(tmp%5==0){
            	cnt++;
                tmp/=5;
        	}    
        }
    }
    
    printf("%d\n",cnt);
    
    
    
    
    return 0;
}