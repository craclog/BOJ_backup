#include <stdio.h>

int main()
{
        int n,i,j;
        int x[50];
        int y[50];
        int z[50]={0,};
        scanf("%d",&n);

        for(i=0 ; i<n ; i++){
                scanf("%d %d",&x[i],&y[i]);

        }

        for(i=0; i<n ; i++){
                for(j=0 ; j<n ; j++){
                        if(x[i] < x[j] && y[i] < y[j])
                                z[i]++;
                }
        }
        for(i=0 ; i<n ; i++){
                printf("%d ",z[i]+1);

        }
        printf("\n");

        return 0;
}
