#include <cstdio>
#include <set>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;
typedef long long ll;

char a[1003], b[1003];
int main(){
	int idx = 0;
	int alen, blen;
	scanf("%s",a);
	scanf("%s",b);
	alen = strlen(a);
	blen = strlen(b);
	int cnt = 0;
	for(int i=0 ;i< alen; i++)
	{
		if( a[i] == '1') cnt++;
	}
	if( cnt % 2 == 1) cnt++;
	idx = 0;
	int cur = cnt;
	int isfail = 0;
	while(1)
	{
		if( idx == blen) break;
		if( b[idx] == '0') // '0'
		{
			if( cur % 2 == 1)
			{
				if( cnt == 0)
				{
					isfail = 1;
					break;
				}
				cnt--;
				cur--;
				idx++;
			}
			else //cur%2 = 0
			{
				idx++;
			}
		}
		else // '1'
		{
			if( cur % 2 == 0)
			{
				if( cnt == 0)
				{
					isfail = 1;
					break;
				}
				cnt--;
				idx++;
			}
			else // cur%2 = 1
			{
				idx++;
				cur++;
			}
		}
	}
	if( isfail ) puts("DEFEAT");
	else puts("VICTORY");


	return 0;
}