#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        vector<pair<long long,int>> req(n);
        for (int i = 0; i < n; i++) {
            cin >> req[i].first >> req[i].second;
        }

        long long points = 0;
        long long prev_time = 0;
        int prev_side = 0;

        for (auto [time, side] : req) {
            long long len = time - prev_time;
            int dist = abs(side - prev_side);

            if ((len % 2) == dist) {
                points += len;
            } else {
                points += len - 1;
            }
            prev_time = time;
            prev_side = side;
        }
        points += (m - prev_time);
        cout << points << "\n";
    }
    return 0;
}
