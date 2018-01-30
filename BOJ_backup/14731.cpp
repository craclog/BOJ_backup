#include <cstdio>
#include <vector>
using namespace std;
#define MOD 1000000007
long long PowMod(long long a)
{
    long long res;
    if (a == 0)
        return 1;
    else if (a == 1)
        return 2;
    else
    {   
        res = PowMod(a / 2) % MOD;
        if( a % 2 == 1) return (((res*res) % MOD) *2) % MOD;
        else return (res * res) % MOD;  
    }   
}
int main() {
    int n;
    long long a,b;
    scanf("%d", &n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {   
        scanf("%lld %lld", &a, &b);
        if (b == 0) continue;
        a = (a*b) % MOD;
        --b;
        sum = (sum + (a * PowMod(b) % MOD)) % MOD;
    }   
    printf("%lld\n", sum);
    return 0;
}
