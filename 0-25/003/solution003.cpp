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


int main() {
    fast_cin();
    ull N = 600851475143;
    ull a = N;
    ull n = sqrt(N);

    int ans = N;
    
    for (int i = 3; i < n; i += 2) {
        while (N % i == 0) {
            ans = i;
            N /= i;
        }

        if(i % 999 == 0) cout << "CHECK" << ln;
    }

    (N == 1) ? (cout << ans) : (cout << N);

    return 0;
}
