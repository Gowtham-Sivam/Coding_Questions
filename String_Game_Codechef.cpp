#include<iostream>
#include<algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sem = 0;
        sort(s.begin(), s.end());

        if (n % 2 == 0) {
            int i = 0;
            for (i = 1; i < n; i++) {
                if (s[i - 1] == s[i]) {
                    sem = 1;
                    i++ ;
                } else {

                    sem = 0;
                    cout << "NO" << endl;
                    break;
                }
            }
        } else {
            cout << "NO" << endl;
        }
        if(sem){
            cout << "YES" << endl ;
        }
    }
    return 0;
}
