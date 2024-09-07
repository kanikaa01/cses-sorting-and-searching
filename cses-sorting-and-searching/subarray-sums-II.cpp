#include <bits/stdc++.h>
using namespace std;
 
using ll = long long int;
using pll = pair <ll, ll>;

int main() {
        ll n; cin>>n;
        ll x; cin>>x;
        vector <ll> a(n);
        for(ll i=0; i<n; i++){
            ll ele; cin>>ele;
            a[i] = ele;
        }
        
        ll count = 0;
        
        map <ll, ll> mp;
        mp[0]++;
        
        ll curr = 0;
        for(ll i=0; i<n; i++){
            curr += a[i];
            ll req = curr - x;
            if (mp.find(req) != mp.end()){
                count += (mp[req]);
            }
            mp[curr]++;
        }
        
        cout<<count;
        return 0;
}
