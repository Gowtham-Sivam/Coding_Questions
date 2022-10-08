#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        map<char, int> mp; // count of each character
        string s;
        cin >> s;
        int i = 0, count = 0;
        int ans = 1;
        while (i < s.size()) {

            if (mp.find(s[i]) == mp.end()) {
                mp[s[i]] = i;
//                cout << "updating s[i] -" << s[i] << endl;
                count++;

                i++;
            } else {
                i = mp[s[i]] + 1;
                mp.clear();
//                cout << "Repetition found " << endl;
                if (count > ans) {
                    ans = count;
                }
                count = 0;
            }
        }
        cout << max(ans, count) << endl;
        ans = 0;
    }

    return 0;
}