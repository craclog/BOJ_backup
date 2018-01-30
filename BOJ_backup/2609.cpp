#include<cstdio>

int gcd ( int x, int y ) {
  int z;
  while ( x != 0 ) {
     z = x; 
     x = y%x;
     y = z;
  }
  return y;
}
int main(){
    
    int a,b;
    int g,l;
    scanf("%d %d",&a,&b);
    g = gcd(a,b);
    printf("%d\n",g);
    printf("%d\n",a*b/g);  
    return 0;
}