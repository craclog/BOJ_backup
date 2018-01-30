#include<stdio.h>
#define SWAP(x,y) { int t; t=x ; x=y; y=t;}

int main(){
    
    int i,j,tc,flag;
    int count_a1;
    int count_b1;
    int count_a2;
    int count_b2;
    int lastIndex;
    int result;
    char str1[100002];
    char str2[100002];
    char tmp = 1;
    
    scanf("%d",&tc);
    getchar();
    while(tc--){
        flag = 0;
        i = 0;
        j = 0;
        count_a1 = 0;
        count_b1 = 0;
        count_a2 = 0;
        count_b2 = 0;
        lastIndex = 0;
        result = 0;
        while(tmp != ' '){
            scanf("%c",&tmp);
            if(tmp == 'a')
                count_a1++;
            else if(tmp == 'b')
                count_b1++;
            else if(tmp == ' ');
            else
                flag = -1;
            str1[i] = tmp;
            i++;
        }
        i = 0;
        while(tmp != '\n'){
            scanf("%c",&tmp);
            if(tmp == 'a')
                count_a2++;
            else if(tmp == 'b')
                count_b2++;
            else if(tmp == '\n');
            else
                flag = -1;
            str2[i] = tmp;
            i++;
        }
        if(count_a1+count_b1 != count_a2+count_b2 || flag == -1){
            printf("a1 : %3d, b1: %3d\n",count_a1,count_b1);
            printf("a2 : %3d, b2: %3d\n",count_a2,count_b2);
            puts("-1");
            continue;
        }
        
        for(i=1; i<count_a1+count_b1; i++){
            if(str1[i] != str2[i]){
                lastIndex = i+1;
                j = i+1;
                while(str2[i] != str1[j]){
                    j++;
                }
                result += j-i;
                SWAP(str1[i],str1[j]);
            }
        }
        
        printf("%d\n",result);
            
        
    }
    
    
    return 0;
}