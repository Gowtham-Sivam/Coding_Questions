#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int i;
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        i = 0;
        int l = 0;
        int r = n-1 ;
        int ans[n] ;
        while(l <= r){
            ans[i] = arr[r] ;
            i++ ;
            ans[i] = arr[l] ;
            l++ ;
            r-- ;
            i++ ;
        }

        for ( i = 0 ; i < n ; i++)
        {
            cout << ans[i] << " "  ;
        }
    }
    return 0;
}