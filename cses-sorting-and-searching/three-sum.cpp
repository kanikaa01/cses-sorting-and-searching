#include <bits/stdc++.h>
using namespace std;
 
using ll = long long int;
using pll = pair <ll, ll>;

int main() {
        ll n; cin>>n;
        ll x; cin>>x;
        vector <pll> a(n);
        for(ll i=0; i<n; i++){
            ll ele; cin>>ele;
            a[i] = {ele, i+1};
        }
        
        sort(a.begin(), a.end());
        bool done = false;
        for(ll i=0; i<n-2 && !done; i++){
            ll l = i+1; ll r = n-1;
            while(l<r){
                ll sum = a[i].first + a[l].first + a[r].first;
                if (sum<x) l++;
                else if (sum>x) r--;
                else {
                    done = true;
                    cout<<a[i].second<<" "<<a[l].second<<" "<<a[r].second;
                    break;
                }
            }
        }
        if (!done) cout<<"IMPOSSIBLE";
        return 0;
}
