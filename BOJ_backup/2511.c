#include<stdio.h>
//705-8000
int main(){
    
    int i;
    int lastwin=-1;   // A : 1,   B :0
    int score1=0,score2=0;
    int card1[10],card2[10];
    char winner;
    
    for(i=0;i<10;i++)
        scanf("%d",&card1[i]);
    for(i=0;i<10;i++)
        scanf("%d",&card2[i]);
    
    
    
    for(i=0;i<10;i++){
        
        if(card1[i]>card2[i]){
            score1+=3;
            lastwin=1;
        }
        else if(card2[i]>card1[i]){
            score2+=3;
            lastwin=0;
        }
        else{
            score1++;
            score2++;
        }
    }
    if(score1>score2)
        winner = 'A';
    else if(score2>score1)
        winner = 'B';
    else if(lastwin==1){
        winner = 'A';
    }
    else if(lastwin==0){
        winner = 'B';
    }
    else if(lastwin==-1){
        winner = 'D';
    }
    
    printf("%d %d\n",score1,score2);
    printf("%c\n",winner);
    
    
    
    
    return 0;
}