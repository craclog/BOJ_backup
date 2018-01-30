#include <cstdio>
#include <queue>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

priority_queue<double, vector<double>, less<double> > pq; 
double a;
vector<double> v;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {   
        scanf("%lf",&a);
        pq.push(a);
        if( pq.size() > 7 ) pq.pop();
    }   
    while(pq.size() > 0)
    {   
        double tmp  = pq.top();
        pq.pop();
        v.push_back(tmp);
    }   
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {   
        printf("%.3lf\n",v[i]);
    }   
    return 0;
}
