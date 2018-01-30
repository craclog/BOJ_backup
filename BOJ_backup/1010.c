//조합.  m개중에서 n개 선택
//조합수는 m! / (n! * (m-n)!)
#include<stdio.h>

void soinsu(int *arr,int n){
    int i;
    for(i=2; i<=n; i++){
        if(n%i == 0){
            arr[i]++;
            //printf("i:%d, n:%d\n",i,n);
            n = n/i;
            i = 1;
        }
        if(n==1)
            break;
    }
    //puts("soinsu fin!");
}

int main(){
 	int tc,n,m,i;
 	int a[31];
 	int b[31];
 	unsigned int res;
   scanf("%d",&tc);

   while(tc--){
        scanf("%d%d",&n,&m);
        for(i=0;i<31;i++){   //reset
            a[i] = 0;
            b[i] = 0;
        }
        res = 1;
        
        for(i = (m-n+1); i<=m; i++)
            soinsu(a,i);
        for(i=2; i<=n; i++)
            soinsu(b,i);
        for(i=1; i<= m; i++){
            //printf("%d : %d %d\n",i,a[i],b[i]);
            a[i] = a[i]-b[i];
            if(a[i]<0)
                puts("Under 0!");
        }
        
        for(i=1; i<=m; i++){
            if(a[i] != 0){
                while(a[i]--)
                    res *= i;
            }
        }
        printf("%d\n",res);

   }
 return 0;
}