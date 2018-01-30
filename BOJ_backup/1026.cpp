#include <stdio.h>

int main() {
	int A[50],B[50],N,S=0,i,tmp,j;
	int C[50];
	int D[50];

	scanf("%d",&N);
	
	for(i=0 ; i<N; i++)
	{
		C[i]=1;
	}

	for(i=0; i< N ; i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0; i< N ; i++)
	{
		scanf("%d",&B[i]);
	}

	for(i=0 ; i <N ;i++)
	{
		for(j=i+1; j <N ; j++)
		{
			if(A[i]>A[j])
			{
				tmp=A[i];
				A[i]=A[j];
				A[j]=tmp;
			}
		}
	}

	for(i=0 ; i< N ;i++)
	{
		for(j=i+1 ; j<N; j++)
		{
			if(B[i]>=B[j]) 
			{
				C[i]++;
			}
			else C[j]++;

		}
	}
	for(i=0 ; i < N; i++)
	{
		for(j=0; j<N; j++)
		{
		if(C[i]==N-j) D[j]=A[j]*B[i];
		}
	}
	
	for(i=0; i<N; i++)
	{
		S=S+D[i];
	}

	printf("%d\n",S);

	return 0;
}
