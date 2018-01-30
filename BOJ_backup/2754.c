#include<stdio.h>

int main(){
    char fir_score;
    char sec_score;
    float res=0;
    scanf("%c",&fir_score);
    scanf("%c",&sec_score);
    getchar();
    switch(fir_score){
        case 'A':
            res=4.0;
            break;
        case 'B':
            res = 3.0;
            break;
        case 'C':
            res = 2.0;
            break;
        case 'D':
            res = 1.0;
            break;
        case 'F':
            res = 0.0;
            break;
    }
    switch(sec_score){
        case '-':
            res -= 0.3;
            break;
        case '+':
            res += 0.3;
            break;
        case '0':
            break;
    }
    printf("%.1f\n",res);
    
    
    
    
    return 0;
}