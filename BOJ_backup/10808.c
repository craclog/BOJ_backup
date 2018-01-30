#include <stdio.h>

char cnt[30] = { 0, };
char arr[102];
int main() {
	int i;
	scanf("%s", arr);
	for (i = 0; arr[i] != '\n'&& arr[i] != '\0'; i++) {
		cnt[arr[i] - 'a']++;
	}
	for(i=0; i<26; i++)
		printf("%d ", cnt[i]);
	puts("");
	return 0;
}