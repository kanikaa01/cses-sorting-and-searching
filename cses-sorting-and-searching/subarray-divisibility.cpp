#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        ll ele; cin >> ele;
        a[i] = ele % n;
        if (a[i] < 0) a[i] += n;
    }
    
    ll count = 0;
    map<ll, ll> mp;
    mp[0]++;
    
    ll curr = 0;
    for (ll i = 0; i < n; i++) {
        curr += a[i];
        curr %= n;
        if (curr < 0) curr += n;

        if (mp.find(curr) != mp.end()) {
            count += mp[curr];
        }
        mp[curr]++;
    }
    
    cout << count;
    return 0;
}

