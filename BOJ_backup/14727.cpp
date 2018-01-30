#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;
using ll = long long;
using ii =  pair<int,int>;

int main()
{
    int n;
    ll ans = 0;
    stack<ii> st;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int h, minx = i; scanf("%d", &h);
        while (!st.empty() && st.top().y > h) {
            ans = max(ans, ll(st.top().y) * ll(i - st.top().x));
            minx = min(minx, st.top().x);
            st.pop();
        }
        st.push({minx, h});
    }

    while (!st.empty()) {
        ans = max(ans, ll(st.top().y) * ll(n - st.top().x));
        st.pop();
    }

    printf("%lld\n", ans);
    return 0;
}