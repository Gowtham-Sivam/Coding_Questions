#include<iostream>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a;
        cin >> b;
        cin >> x;
        cin >> y;
        int val = a - b;
        if (val == 0 ) {
            cout << "YES" << endl;

        } else if (val < 0) {
            val = abs ( val ) ;
            if ( x - val >= 0 ){
                cout << "YES" << endl ;
            }else{
                cout << "NO" << endl ;
            }
        } else {
            val = abs(val) ;
            if ( y  - val >= 0 ){
                cout << "YES" << endl ;
            }else{
                cout << "NO" << endl ;
            }
        }
    }
    return 0 ;
}
