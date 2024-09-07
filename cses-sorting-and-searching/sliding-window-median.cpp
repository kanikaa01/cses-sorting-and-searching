#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

using ll = long long int;
using pll = pair <ll, ll>;
typedef tree<pll, null_type, less<pll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main() {
    ll n; cin >> n;
    ll k; cin>>k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        ll ele; cin >> ele;
        a[i] = ele;
    }
    vector <ll> ans;
    pbds st;
    for(ll i=0; i<k; i++) st.insert({a[i], i});
    ll ind = (k-1)/2;
    ans.push_back((*st.find_by_order(ind)).first);
    
    for(ll i=k; i<n; i++){
        st.erase({a[i-k], i-k});
        st.insert({a[i], i});
        
        ans.push_back((*st.find_by_order(ind)).first);
    }
    
    for(auto it: ans) cout<<it<<" ";
    
    return 0;
}

