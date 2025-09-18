#include <bits/stdc++.h>
using namespace std;

int main () {
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> visto;
        
        for (int num : nums) {
            if (visto.count(num)) return true;
            visto.insert(num);
        }
        return false;
    }
};
return 0;
}