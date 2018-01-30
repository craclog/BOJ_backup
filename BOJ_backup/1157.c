#include<stdio.h>
#include<string.h>
int main(){
	int i,cnt[26]={0,},max=0,k=0,a;
	char str[1000001];
	gets(str);
	int ss=strlen(str);
	for ( i = 0 ; i < ss ;i++ ) {
		if ( str[i] >= 'A' && str[i] <= 'Z' ) 
			cnt[str[i]-'A']++;
		else cnt[str[i]-'a']++;
	}
	for(i=0;i<26;i++){
		if(max<cnt[i]){
			max=cnt[i];
			a=i;
		}
	}
	for(i=0;i<26;i++){
		if(max==cnt[i])
			k++;
	}
	if(k>=2)
		printf("?");
	else
		printf("%c", a+65);
}