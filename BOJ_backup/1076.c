//왜 틀리는지모름
//+fflush gcc에서는 안된다고함! 다른거써보자
#include<stdio.h>
#include<stdlib.h>

double func(char * str)
{
 if(!strcmp(str,"black"))
     return 0;
 else if(!strcmp(str,"brown"))
     return 1;
 else if(!strcmp(str,"red"))
     return 2;
 else if(!strcmp(str,"orange"))
     return 3;
 else if(!strcmp(str,"yellow"))
     return 4;
 else if(!strcmp(str,"green"))
     return 5;
 else if(!strcmp(str,"blue"))
     return 6;
 else if(!strcmp(str,"violet"))
     return 7;
 else if(!strcmp(str,"grey"))
     return 8;
 else if(!strcmp(str,"white"))
     return 9;
 else return -999;
    
}

int main(){
    
    double res = 0;
    double cnt = 0;
    double mul = 1;
    int i;
    char color1[15];
    char color2[15];
    char color3[15];
    scanf("%15s",color1);
    getchar();
    
    scanf("%15s",color2);
    getchar();
    
    scanf("%15s",color3);
    getchar();
    
    res += func(color1);
    res *= 10;
    res += func(color2);
    
    cnt = func(color3);
    for(i=0;i<cnt;i++){
        mul *= 10;
    }
    res *= mul;
    
    printf("%.lf\n",res);
    return 0;
    
}