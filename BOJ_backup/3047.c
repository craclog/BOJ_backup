#include<stdio.h>

int main()
    {
    int a[3];
    int dap[3];
    char arr[3];
    int i,tmp,j;
    
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    
    getchar();
    for(i=0;i<3;i++)
        scanf("%c",&arr[i]);
    //for(i=0;i<3;i++)
    //printf("%c\n",arr[i]);//test
    
    for(i=0;i<3;i++)
        for(j=i;j<3;j++){
        if(a[i]>a[j]){
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
        
    }
   // for(i=0;i<3;i++)
    //printf("%d",a[i]);
    //printf("\n==a정렬=======\n");
    
    switch(arr[0]){
        case 'A':
        dap[0] = a[0];
        //printf("qwer1 %d\n",dap[0]);
        break;
        
        case 'B':
        dap[0] = a[1];
       // printf("qwer2");
        break;
        
        case 'C':
        dap[0] = a[2];
       // printf("qwer3");
        break;
      
    }
    switch(arr[1]){
        case 'A':
        dap[1] = a[0];
        break;
        
        case 'B':
        dap[1] = a[1];
        //printf("qwerbb %d\n",dap[1]);
        break;
        
        case 'C':
        dap[1] = a[2];
        break;
      
    }
    switch(arr[2]){
        case 'A':
        dap[2] = a[0];
        break;
        
        case 'B':
        dap[2] = a[1];
        break;
        
        case 'C':
        dap[2] = a[2];
        //printf("qwerbbcc %d\n",dap[2]);
        break;
      
    }
    
    for(i=0;i<3;i++)
        printf("%d ",dap[i]);
    printf("\n");
    
    return 0;
}