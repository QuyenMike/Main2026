/*
 * Author: Mike1312
 * Valid Anagram
 * Time:  O(nlogn+mlogm)
 * Space: O(1) or O ( n + m ) O(n+m)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};

int main() {
    Solution sol;
    string s = "racecar";
    string t = "carrace";
    string x = "jar";
    string y = "jam";
    
    cout << sol.isAnagram(s, t) <<endl;  
    cout << sol.isAnagram(x, y) <<endl;
    return 0;
}