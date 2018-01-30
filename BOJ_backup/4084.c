#include<stdio.h>

int abs(int a){
    
    if(a<0)
        return (-1)*a;
    else return a;

}

int main()
    {
    int a,b,c,d;
    int q,w,e,r;
    int cnt;
    
    while(1){
        
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==0 && b==0 && c==0 && d==0)
            return 0;
        cnt =0;
        while(1){
            
            if(a==b && b==c && c==d){
                printf("%d\n",cnt);
                break;
            }
            q = abs(a-b);
            w = abs(b-c);
            e = abs(c-d);
            r = abs(d-a);
            a = q;
            b = w;
            c = e;
            d = r;
            cnt++;
            
            
        }
        
        
        
    }
    
    
    
    
    return 0;
}