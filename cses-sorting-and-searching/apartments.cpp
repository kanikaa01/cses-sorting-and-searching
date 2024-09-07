#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main() {
    ll n; cin>>n;
    ll m; cin>>m;
    ll k; cin>>k;
    
    vector <pair <ll, ll>> a(n);
    
    for(ll i=0; i<n; i++){
        ll ele; cin>>ele;
        a[i] = {ele-k, ele+k};
    }
    
    sort(a.begin(), a.end());
    vector <ll> b(m);
    for(ll i=0; i<m; i++) cin>>b[i];
    
    sort(b.begin(), b.end());
    ll i=0; ll j =0;
    ll count = 0;
    
    while(i<n && j<m){
        ll lb = a[i].first;
        ll ub = a[i].second;
        
        if (b[j]>=lb && b[j]<=ub){
            count++;
            i++;
            j++;
        }else if (b[j]>ub) i++;
        else if (b[j]<lb) j++;
    }
    
    cout<<count;
    return 0;
}
