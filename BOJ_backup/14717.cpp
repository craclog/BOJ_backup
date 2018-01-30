#include <cstdio>

int remain[21];
int main(){
    int a,b;
    int win = 0;
    int total = 0;
    scanf("%d %d",&a,&b);
    for(int i=1; i<21; i++)
        remain[i] = 1;
    remain[a]--;
    if( a== b) remain[a+10]--;
    else remain[b]--;
    for(int i=1; i<21; i++)
    {   
        int tmpi = i;
        if( i > 10) tmpi = i-10;
        if( remain[i] == 0) continue;
        remain[i]--;
        for(int j=1; j<21; j++)
        {   
            int tmpj = j;
            if( j > 10 ) tmpj = j - 10; 
            if( remain[j] == 0) continue;
            total++;
            //ttaeng
            if( a == b)
            {   
                if( tmpi != tmpj) win++;
                else if( a > tmpi) win++;
            }   
            else // a!=b
            {   
                int user = (a+b) % 10;  
                int opp = (tmpi+tmpj) % 10; 
                if( tmpi == tmpj) continue;
                else if( user > opp ) 
                {   
                    win++;  
                }   
            }   
        }   
        remain[i]++;
    }   
//  printf("%d %d\n",win, total);
    printf("%.3lf\n",(double)win / (double)total); 
    
    return 0;
}