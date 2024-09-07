#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main() {
    ll n; cin>>n;
    ll x; cin>>x;
    vector <ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    
    ll count = 0;
    sort(a.begin(), a.end());
    int i=0;
    int j=n-1;
    while(i<j){
        if (a[i] + a[j] <= x){
            count++;
            i++;
            j--;
        }else{
            count++;
            j--;
        }
    }
    if (i==j) count++;
    cout<<count;
    return 0;
}
