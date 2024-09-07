#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair <long long, long long>;

int main() {
    ll x; cin>>x;
    ll n; cin>>n;
    set <ll> position = {0, x};
    multiset <ll> length = {x};
    
    while(n--){
        ll ele; cin>>ele;
        
        auto itr = position.insert(ele).first;
        ll right = *next(itr);
        ll left = *prev(itr);
        
        length.erase(length.find(right-left));
        length.insert(right - ele);
        length.insert(ele - left);

        cout<<(*(length.rbegin()))<<" ";
    }
    return 0;
    
}
