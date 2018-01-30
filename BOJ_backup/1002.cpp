#include <stdio.h>

int main()
{
	int n;
	int x1,y1,r1,x2,y2,r2;
	int d=0,r=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
		d=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		if(r1>=r2) {r=r1;}
		else r=r2;
		if(d>r*r){
			if(x1==x2 && y1==y2 && r1==r2)printf("-1\n");
			else{
				if(d==(r1+r2)*(r1+r2))printf("1\n");
				if(d>(r1+r2)*(r1+r2))printf("0\n");
				if(d<(r1+r2)*(r1+r2))printf("2\n");
				}
			}
		else{
			if(x1==x2 && y1==y2 && r1==r2)printf("-1\n");
			else{
				if((r2-r1)*(r2-r1)==d)printf("1\n");
				if((r2-r1)*(r2-r1)>d)printf("0\n");
				if((r2-r1)*(r2-r1)<d)printf("2\n");
				}
			}
	}
	
	
	return 0;
}