#include<stdio.h>

int main(){
    int n;
    int i;
    int stu;
    int apple;
    int res = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&stu);
        scanf("%d",&apple);
        res += apple%stu; 
    }
    printf("%d",res);
    return 0;
}