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
        
        bool done = false;
        
        map <ll, pll> mp;
        
        for(ll i=0; i<n && !done; i++){
            for(ll j=i+1; j<n; j++){
                ll target = x - a[i] - a[j];
                if (mp.find(target) != mp.end()){
                    done = true;
                    cout<<i+1<<" "<<j+1<<" "<<mp[target].first+1<<" "<<mp[target].second+1;
                    break;
                }
            }
            
            for(ll j=0; j<i && !done; j++){
                ll sum = a[i] + a[j];
                mp[sum] = {i, j};
            }
        }
        if (!done) cout<<"IMPOSSIBLE";
        return 0;
}
