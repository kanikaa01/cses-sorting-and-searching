#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    set <long long> st;
    while(n--){
        long long ele; cin>>ele;
        st.insert(ele);
    }
    cout<<st.size();
    return 0;
}
