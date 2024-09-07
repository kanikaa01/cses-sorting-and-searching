#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main() {
    ll n; cin>>n;
    vector <ll> a(n);
    for(auto &i: a) cin>>i;
    ll nextreq = 1;
    sort(a.begin(), a.end());
    for(ll i=0; i<n; i++){
        if (a[i] > nextreq)break;
        nextreq += (a[i]);
    }
    
    cout<<nextreq;
    return 0;
}
