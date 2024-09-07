#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main() {
    ll n; cin>>n;
    vector <ll> a(n);
    map <ll, ll> ind;
    for(ll i =0; i<n; i++) {cin>>a[i]; ind[a[i]] = i;}
    ll count = 1;
    for(ll i=1; i<n; i++) if (ind[i+1] < ind[i]) count++;
    cout<<count;
    return 0;
    
}
