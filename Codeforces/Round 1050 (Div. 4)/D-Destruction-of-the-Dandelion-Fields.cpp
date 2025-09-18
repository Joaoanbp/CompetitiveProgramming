#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    long long total_sum = 0;
    vector<int> odds;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        total_sum += a;
        if (a % 2 != 0) {
            odds.push_back(a);
        }
    }
    if (odds.empty()) {
        cout << 0 << "\n";
        return;
    }
    sort(odds.begin(), odds.end());
 
    int num_to_discard = odds.size() / 2;
    
    long long loss = 0;
    for (int i = 0; i < num_to_discard; ++i) {
        loss += odds[i];
    }
    long long max_cut = total_sum - loss;
    cout << max_cut << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
    return 0;
}
