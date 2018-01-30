#include <cstdio>
#include <vector>
#include <string>
#include <string.h>
#include <queue>
#include <map>
#include <set>
#include <deque>
#include <algorithm>
using namespace std;

int k,l,n;
vector<int> v;
set<int> s;
map<int, int> res;
map<int, int> real;
int main() {
	scanf("%d %d", &k,&l);
	
	for (int i = 0; i < l; i++)
	{
		int tmp;
		scanf("%d", &tmp);
		//pair<set<int>::iterator, bool> pr;
		
		auto pr = s.insert(tmp);
		if (pr.second == false)
		{
			//v.push_back(tmp);
			//res.erase(tmp);
			res[tmp] = i;
		}
		else
			res[tmp] = i;
				
	}
	for (auto i = res.begin(); i != res.end(); ++i)
	{
		real[(*i).second] = (*i).first;
	}
	
	int count = 0;
	for (auto i = real.begin(); i != real.end(); i++)
	{
		printf("%08d\n", (*i).second);
		count++;
		if (count == k) break;
	}
	
	return 0;
}