#include<stdio.h>

int main(){
    int m,d;
    int i;
    int sum = 0;
    int days[13];
    days[1] = 31;
    days[3] = 31;
    days[5] = 31;
    days[7] = 31;
    days[8] = 31;
    days[10] = 31;
    days[12] = 31;
    days[2] = 28;
    days[4] = 30;
    days[6] = 30;
    days[9] = 30;
    days[11] = 30;
    
    scanf("%d%d",&m,&d);
    for(i=1 ; i<m ; i++){
        sum += days[i];
    }
    sum += d;
    switch(sum%7){
        case 0:
            puts("SUN");
            break;
        case 1:
            puts("MON");
            break;
        case 2:
            puts("TUE");
            break;
        case 3:
            puts("WED");
            break;
        case 4:
            puts("THU");
            break;
        case 5:
            puts("FRI");
            break;
        case 6:
            puts("SAT");
            break;
    }
    return 0;
}