#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
const int N=1e5+10;

void fastIO() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

void setupIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve() {
      ll  n;
      cin>>n;
      ll a[n+11];
      ll sum=0;
      for(int i=0;i<n-2;i++){
        cin>>a[i];
        sum+=a[i];
      }
      ll target=0;
      cin>>target;
      ll ans=target-sum+1;
      cout<<ans<<endl;
      
}

int main() {
   // setupIO();
    fastIO();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}