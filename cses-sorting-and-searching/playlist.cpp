#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair <long long, long long>;

int main() {
    ll n; cin>>n;
    vector <ll> a(n);
    for(auto &i: a) cin>>i;
    ll ans = 0;
    map <ll, ll> mp;
    ll i=0; ll j=0;
    
    while(i<n && j<n){
        mp[a[j]]++;
        if (mp.size() != j-i+1){
            mp[a[i]]--;
            if (mp[a[i]] == 0) mp.erase(a[i]);
            i++;
        }
        ans = max(ans, j-i+1);
        j++;
    }
    cout<<ans;
    return 0;
    
}
