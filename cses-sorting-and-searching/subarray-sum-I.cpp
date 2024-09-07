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
        
        ll i=0; ll j=0;
        ll curr = 0;
        
        while(i<n && j<n){
            curr += a[j];
            
            while(curr>x){
                curr -= a[i];
                i++;
            }
            
            if (curr == x) count++;
            j++;
        }
        
        
        cout<<count;
        return 0;
}
