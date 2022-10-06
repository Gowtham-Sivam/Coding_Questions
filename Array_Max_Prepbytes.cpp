#include<bits/stdc++.h>

using namespace std;


void max_array(int arr[], int n, int k) {
    int i = 0;
    int sum = 0;
    int val = 0  ;
    int ind = 0 ;
    while(ind < n ) {
        for (i = ind; i < n; i += k) {
            val += arr[i];
            if (val > sum) {
                sum = val;
            }
        }
        val = 0 ;
        ind++ ;
    }
    cout << sum << endl ;
}

int main() {
//
//    ios_base::sync_with_stdio(true);
//    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k;
        cin >> k;

        int arr[n];
        int i;
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        max_array(arr,n,k );
    }
    return 0;
}