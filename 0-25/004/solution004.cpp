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


bool check_palindrome(ull n) {
    ull original = n;
    ull reverse = 0;
    
    while (n > 0) {
        reverse = (reverse * 10) + (n % 10);
        n /= 10;
    }
    
    return original == reverse;
}


int main() {
    fast_cin();
    ull ans = 121*121;
    ull iterations = 0;
    ull tmp;

    for (ull i = 999; i > 122; i--) {
        iterations++;
        tmp = i*i;
        if (tmp < ans) break;
        else if (check_palindrome(tmp)) {
            ans = tmp;
            continue;
        }

        for (ull j = i-1; j > 100; j--) {
            iterations++;
            tmp = i*j;
            if (tmp < ans) break;
            else if (check_palindrome(tmp)) {
                ans = tmp;
                break;
            }
        }
    }

    cout << ans << ln << iterations;

    return 0;
}
