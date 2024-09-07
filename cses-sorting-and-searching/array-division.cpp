#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

ll count(vector <ll> &a, ll mx){
    ll curr = 0;
    ll cnt =0;
    for(auto &it: a){
        if (it +curr<=mx) curr += it;
        else {
            cnt++;
            curr = it;
        }
    }
    
    return cnt;
}

int main() {
    ll n; cin >> n;
    ll k; cin>>k;
    vector<ll> a(n);
    ll acc = 0;
    ll mx = 0;
    for (ll i = 0; i < n; i++) {
        ll ele; cin >> ele;
        a[i] = ele;
        acc += ele;
        mx = max(mx, ele);
    }
    
    ll low = mx; 
    ll high = acc;
    
    while(low<=high){
        ll mid = low + ((high-low)>>1); // (high+low )/2
        
        if (count(a, mid)<k) high = mid -1;
        else low = mid+1;
    }
    
    cout<<low;
    
    return 0;
}

