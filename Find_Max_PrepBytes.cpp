#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    int arr[n];
    int i ;
    for ( i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    int l = 0 ;
    int r = n-1 ;
    i = 0 ;
    int diff = -1 ;
    while(l<r) {
        if (r == l + 1) {
            r = n - 1 ;
            if (arr[l] < arr[r]) {
                diff = abs(r - l);
                break;
            }
            l++ ;
        } else if (arr[l] < arr[r]) {
            diff = abs(r - l);
            break;
        } else if (arr[l] > arr[r]) {
            r--;
        }
    }
    cout << diff << endl;

    return 0 ;
}