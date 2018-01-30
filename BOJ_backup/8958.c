#include <stdio.h>

int main(){
    int tc,i;
    int streak;
    int score;
    char str[90];
    scanf("%d",&tc);
    while(tc--){
        streak = 1;
        score = 0;
        scanf("%s",str);
        for(i=0; str[i] != '\n'; i++){
            if(str[i] == 'O'){
                score += streak;
                streak++;
            }
            else if(str[i] == 'X'){
                streak = 1;
                //printf("!\n");
            }
            else
                break;
        }
        printf("%d\n",score);
    }
    return 0;
}