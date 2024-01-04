#include <iostream>
#include <vector>

using namespace std;

bool is_palindrome(const string& s) {
    const size_t last_pointer = s.length() - 1;
    for (int i = 0; i < last_pointer; i++) {
        if (s[i] != s[last_pointer - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    vector<string> words;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string input_string;
        cin >> input_string;
        words.push_back(input_string);
    }

    for (const string& word: words) {
        size_t len = 0;
        for (size_t i = word.length(); i > 0; i--) {
            if (is_palindrome(word.substr(0, i))) {
                len = i;
                break;
            }
        }
        cout << len << endl;
    }
}
