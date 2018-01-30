#include<stdio.h>

int main() {

int q,w,e,r,t,y,u;
int sum;
int min;
sum=0;
min=9999999;
scanf("%d %d %d %d %d %d %d", &q,&w,&e,&r,&t,&y,&u);

if(q%2==1) sum=sum+q;
if(w%2==1) sum=sum+w;
if(e%2==1) sum=sum+e;
if(r%2==1) sum=sum+r;
if(t%2==1) sum=sum+t;
if(y%2==1) sum=sum+y;
if(u%2==1) sum=sum+u;
if(sum==0) printf("-1\n");
if(sum!=0) printf("%d\n", sum);

if(q%2==1) 
	 min=q;

if(w%2==1) {
	if(min>w) min=w;
}
if(e%2==1) {
	if(min>e) min=e;
}
if(r%2==1) {
	if(min>r) min=r;
}
if(t%2==1) {
	if(min>t) min=t;
}
if(y%2==1){
	if(min>y) min=y;
}
if(u%2==1) {
	if(min>u) min=u;
}
if(sum!=0) printf("%d", min);







return 0;


}