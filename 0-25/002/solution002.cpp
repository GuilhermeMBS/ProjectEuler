#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned __int128 u128;

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
    
    u128 a1 = 2;
    u128 a2 = 1;
    u128 ans = 0;
    char even = 0;

    int iterations = 0;

    while(a1 < 4e6) {
        if (even % 3 == 0) {
            ans += a1;
            even = 0;
        }

        u128 nxt = a1 + a2;
        a2 = a1;
        a1 = nxt;

        even++;
    }

    print_s128(ans);
    return 0;
}
