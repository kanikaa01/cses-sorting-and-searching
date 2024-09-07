#include <bits/stdc++.h>
using namespace std;
 
using ll = long long int;
using pll = pair <ll, ll>;

int main() {
        ll n; cin>>n;
        vector <ll> a(n);
        for(ll i=0; i<n; i++){
            ll ele; cin>>ele;
            a[i] = ele;
        }
        vector <ll> ans(n);
        stack <ll> st;
        
        for(ll i=0; i<n; i++){
            while(!st.empty() && a[st.top()] >= a[i]) st.pop();
            ans[i] = (st.empty()) ? 0 : st.top()+1;
            st.push(i);
        }
        
        for(auto it: ans){
            cout<<it<<" ";
        }
        
        return 0;
}
