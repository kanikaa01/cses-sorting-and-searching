#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair <long long, long long>;

int main() {
    ll n; cin>>n;
    vector <ll> a(n);
    for(auto &i: a) cin>>i;
    ll ans = 0;
    ll currmax = 0;
    multiset <int> st;
    
    for(auto it: a){
        if (!st.empty() && st.upper_bound(it) != st.end()){
            st.erase(st.upper_bound(it));
            st.insert(it);
        }else if (it<currmax){
            currmax=it;
        }else{
            if (currmax!=0) st.insert(currmax);
            currmax = it;
        }
    }
    
    cout<<st.size()+1;
    return 0;
    
}
