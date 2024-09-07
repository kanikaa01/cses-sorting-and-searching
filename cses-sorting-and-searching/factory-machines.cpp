#include <bits/stdc++.h>
using namespace std;
 
using ll = long long int;
ll t;

ll products(vector<ll> &a, ll tyme){
    ll ans = 0;
    for(auto &it: a){
        ans += (tyme/it);
        if (ans>t) return ans;
    }
    
    return ans;
}

int main() {
    ll n; cin>>n;
    cin>>t;
    
    vector <ll> a(n);
    ll mxele = 0;
    ll mnele = LLONG_MAX;
    for(auto &i: a){
        cin>>i;
        mnele = min(mnele, i);
        mxele = max(mxele, i);
    }
    
    ll low = mnele;
    ll high = mxele*t;
    
    
    while(low<=high){
        ll mid = low + ((high-low)/2);
        
        if (products(a, mid) < t) low = mid+1;
        else high = mid-1;
    }
    
    cout<<low;
    return 0;
}
