#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

struct count_of_characters {
    int count;
    int index;
};

int first_unique(string s)
{
    // vector<int> vec(26,0);
    // unordered_map<char, int> map;
    // for (char &ch : s) {
    //     map[ch]++;
    // }
    // for (int i = 0; i < s.size(); i++) {
    //     if (map[s[i]] == 1) return i;
    // }
    // return -1;
    struct count_of_characters v;
    unordered_map<char, count_of_characters> map;
    for (size_t i =0; i < s.size(); i++) {
        map[s[i]].count++;
        map[s[i]].index = i;
    }
    
    int idx = 10000;
    for (auto const& elem : map) {
        // elem.first = char
        // elem.second = count_of_characters
        if (elem.second.count == 1) {
             if (elem.second.index < idx) {
                 idx = elem.second.index;
             }
        }
        
    }
    return idx >= s.size() ? -1 : idx;
// 1
// 0
// 0
// 2
// 5
}

int main() {
    cout << first_unique("abcdef") << "\n"; // 0 
    cout << first_unique("") << "\n"; // -1 
    cout << first_unique("aabbccddee") << "\n"; // -1
    cout << first_unique("aabcdecdez") << "\n"; // 2
    cout << first_unique("+++--/") << "\n"; // 5
    return 0;
}

