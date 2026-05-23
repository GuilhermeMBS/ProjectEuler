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


ll sumPA(ll a1, ll n, ll r) {
    ll an = (a1 + (n-1)*r);
    return (a1 + an)*n/2;
}


int main() {
    fast_cin();
    ll m3 = sumPA(3, 999/3, 3);
    ll m5 = sumPA(5, 999/5, 5);
    ll m15 = sumPA(15, 999/15, 15);

    ll ans = m3 + m5 - m15;
    printf("M3 = %llu\nM5 = %llu\nM15 = %llu\nANS = %llu", m3, m5, m15, ans);

    return 0;
}
