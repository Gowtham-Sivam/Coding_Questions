#include<iostream>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        int i = 0 , j = 0 ;
        int sum  = 0 ;
        int val;
        for ( i = 0 ; i < n ; i++){
            cin >> val ;
            sum += val ;
        }
        int arr[sum] ;
        for ( i = 0 ; i < sum ; i++){
            arr[i] = 1 ;
        }
        int total = 0 ;
        for ( i = 0 ; i < sum ; i++){
            for ( j = i + 1  ; j < sum;j++ ){
                total += 1 ;
            }
        }
        cout << total * 2 << endl ;

    }
    return 0 ;
}