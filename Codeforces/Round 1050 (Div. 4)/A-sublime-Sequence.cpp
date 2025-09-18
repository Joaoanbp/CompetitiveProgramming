#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    
    while(t--) {
        int x, n;
        cin >> x >> n;
        
        long long sum = 0;
       
        if(n % 2 == 1) {
            sum = x * ((n + 1)/2) + (-x) * (n/2);
        } else {
            sum = x * (n/2) + (-x) * (n/2);
        }
        cout << sum << '\n';
    }
    return 0;
}