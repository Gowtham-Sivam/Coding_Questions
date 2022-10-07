#include<iostream>
using namespace std ;

int main(){
    int t ; cin >> t ;
    while(t--) {
        string s;
        cin >> s;
        int i = 0;
        int l = 0;
        int r = s.size() - 1;
        int count = 0;
        while (l < r) {
            if (s[l] == s[r]) {
                l++;
                r--;
            } else {
                count = count + abs(int(s[l]) - int(s[r]));
                l++;
                r--;
            }
        }
        cout << count << endl;
    }
    return 0 ;
}