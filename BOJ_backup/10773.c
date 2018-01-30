#include <stdio.h>
int stack[100001];
int top = -1;
int main(){
   int k,i;
   int a;
   double sum = 0;
   scanf("%d",&k);

   for(i=0; i<k; i++){
       scanf("%d",&a);
       if( a == 0)  top--;
       else{
            stack[++top] = a;
        }
   }
   for( i = 0; i<=top; i++){
       sum += stack[i];
   }
   printf("%.f\n",sum);
    return 0;
}