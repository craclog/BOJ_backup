 #include<stdio.h>

 int main(){
     char str[102];
     int cnt = 0;
    int i;
     scanf("%s",str);
    for(i=0; str[i] != '\0'; i++){
        if( str[i] == ',' ) cnt++;
    }
     printf("%d\n",cnt+1);
     return 0;
}
