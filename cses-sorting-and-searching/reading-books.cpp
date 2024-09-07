#include <bits/stdc++.h>
using namespace std;
 
using ll = long long int;
using pll = pair <ll, ll>;

int main() {
        ll n; cin>>n;
        vector <ll> a(n);
        ll acc = 0;
        ll mx=0;
        for(auto &i: a){
            cin>>i;
            acc += i;
            mx = max(mx, i);
        }
        
        if (mx*2>=acc) cout<<2*mx;
        else cout<<acc;
        return 0;
}
