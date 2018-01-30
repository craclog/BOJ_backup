#include <stdio.h>
#include <math.h>

int main(){
    int i;
    int a,b;
    float x;
    float width, height, inch;
    
    
    scanf("%f%f%f",&inch,&height,&width);
    
    x = sqrt(inch*inch/(width*width+height*height));
     a = (int)(x*height);
     b = (int)(x*width);
    
    //printf("%f\n",x);
    //printf("%f %f\n",x*height,x*width);
    printf("%d %d\n",a,b);
    
    return 0;
}
