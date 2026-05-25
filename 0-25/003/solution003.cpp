#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
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
    ull N = 600851475143;
    ull n = sqrt(N);

    int ans = 1;
    
    for (int i = 3; i < n; i+2) {
        while (N % i == 0) {
            ans = i;
            N /= i;
        }
    }

    cout << ans;

    return 0;
}
