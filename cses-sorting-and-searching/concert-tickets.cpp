#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main() {
    ll n; cin>>n;
    ll m; cin>>m;
    
    multiset <ll> st;
    vector <ll> b(m);
    for(ll i=0; i<n; i++) {ll ele; cin>>ele; st.insert(ele);}
    for(ll i=0; i<m; i++) cin>>b[i];
    
    vector <ll> ans;
    
    for(auto it: b){
        auto itr = st.upper_bound(it);
        if (itr!= st.begin()){
            itr--;
            cout<<(*itr)<<endl;
            st.erase(itr);
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
