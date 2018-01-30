#include<stdio.h>
int main(void) {
     
    char str[1000002];
    int cnt = 0;
    while (scanf("%s", str)!=EOF) {
        cnt++;
    }
    printf("%d\n", cnt);
 
}