#include <iostream>

using namespace std;

bool contains_substring(const string& t, const string& p) {
    if (p.length() > t.length()) return false;

    for (int i = 0; i <= t.length() - p.length(); i++) {
        bool mismatch = false;
        for (int j = 0; j < p.length(); j++) {
            if (t[i + j] != p[j]) {
                mismatch = true;
                break;
            }
        }
        if (!mismatch) {
            cout << i << " ";
            return true;
        }
    }
    return false;
}

