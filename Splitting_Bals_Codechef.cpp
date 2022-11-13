#include<iostream>
#include <string>

using namespace std;

void spball(string bal, int n, int first) {
    int i = 0;
    string s;
    s.clear();
    for (i = 0; i < n; i++) {
        if (bal[i] == '1') {
            s += bal[i];
        } else {
            string val;
            val += bal[i];
            int value = stoi(val);
            int count = value;
            val.clear();
            while (value--) {
                s += to_string(count - 1);
            }

        }
    }
    cout << s << endl;
    cout << s.size() << endl;
    int j = 0;
    int size;
    if (first) {
        size = s.size();
        first = 0;
    } else {
        size = bal.size();
    }
    int sem = 0;
    for (j = 1; j < size; j++) {
        if (s[j - 1] == s[j]) {
            sem = 0;

        } else {
            sem = 1;
            break;
        }

    }

    if (sem) {
        sem = 0;
        bal = s;
        spball(bal, bal.size(), 0);
    } else {
        return s.size() ;
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string bal;
        int i = 0;
        int inp_val;
        for (i = 0; i < n; i++) {
            cin >> inp_val;
            bal += to_string(inp_val);
        }
        spball(bal, bal.size(), 1);
    }

    return 0;
}
