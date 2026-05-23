#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef __int128_t u128;

typedef vector<ll> v64;
typedef multiset<ll> m64;
typedef set<ll> s64;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define forn(i, s, e) for(ll i = s; i < e; i++)
#define ln "\n"


void print_u128(unsigned __int128 n) {
    if (n == 0) {
        printf("0");
        return;
    }
    char str[40]; // 128-bit max is ~3.4e38, so 40 chars is safe
    int i = 0;
    while (n > 0) {
        str[i++] = (n % 10) + '0';
        n /= 10;
    }
    while (--i >= 0) putchar(str[i]);
}


void print_s128(__int128 n) {
    if (n < 0) {
        printf("-");
        n = -n;
    }
    print_u128((unsigned __int128)n);
}


int main() {
    fast_cin();
    
    u128 n = 311499;
    u128 s1 = (n*(n+1)*(2*n+1))/6;
    u128 s2 = (n*(n+1))/2;
    u128 s3 = n + 1;

    u128 ans = 4*s1 + 4*s2 + s3;
    print_s128(ans);
    return 0;
}
