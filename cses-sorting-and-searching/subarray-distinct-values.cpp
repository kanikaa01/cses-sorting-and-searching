#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main() {
    ll n; cin >> n;
    ll k; cin>>k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        ll ele; cin >> ele;
        a[i] = ele;
    }
    
    ll count = 0;
    ll i = 0; ll j=0;
    map <ll, ll> freq;
    
    while(i<n && j<n){
        freq[a[j]]++;
        
        while(freq.size()>k){
            freq[a[i]]--;
            if (freq[a[i]] == 0) freq.erase(a[i]);
            i++;
        }
        
        count += (j-i+1);
        j++;
    }
    
    cout << count;
    return 0;
}

