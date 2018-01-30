#include<stdio.h>

int main()
    {
    int a[3];
    int i,j,tmp;
    int dap;
    
    
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
        {
        if(a[i]>a[j])
            {
            tmp = a[j];
            a[j]=a[i];
            a[i]=tmp;
        }
    }
    
    if(a[1]-a[0] == a[2]-a[1])
        {
        tmp = a[0] -(a[1]-a[0]);
        if(tmp>100 || tmp<-100)
            dap = a[2] + a[1]-a[0];
        else dap=tmp;
        
    }
    else{
    	if((a[1]-a[0]) < (a[2]-a[1]))
            {
            dap = a[1]+ a[1]-a[0];
        }
        else{
            dap = a[1] - (a[2]-a[1]);
        }
    	
    }
    
    printf("%d\n",dap);
    
    return 0;
}