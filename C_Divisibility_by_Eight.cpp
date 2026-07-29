#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(const string &s, const string &t) {
    int j = 0;
    for (char c : s) {
        if (j < (int)t.size() && c == t[j])
            j++;
    }
    return j == (int)t.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    // Check 1-digit and 2/3-digit multiples of 8
    for (int x = 0; x < 1000; x += 8) {
        string t = to_string(x);
        if (isSubsequence(s, t)) {
            cout << "YES\n";
            cout << x << "\n";
            return 0;
        }

        if (x < 100) {
            t = (x < 10 ? "0" : "") + to_string(x);
            if (isSubsequence(s, t)) {
                cout << "YES\n";
                cout << stoi(t) << "\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}