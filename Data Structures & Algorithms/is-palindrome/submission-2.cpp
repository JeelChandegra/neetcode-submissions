#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
       int start = 0, end = s.size() - 1;

        while (start < end) {
            // Skip non-alphanumeric characters
            while (start < end && !isalnum(s[start])) start++;
            while (start < end && !isalnum(s[end])) end--;

            // Compare lowercase characters
            if (tolower(s[start]) != tolower(s[end]))
                return false;

            start++;
            end--;
        }
        return true;
    }
};
