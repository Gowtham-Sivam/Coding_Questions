#include<iostream>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ; cin >> n;
        int arr[n];
        int i ;
        for ( i = 0 ; i < n ; i++)
        {
            cin >> arr[i] ;
        }
        int sum ; cin >> sum ;
        int l = 0 ;
        int r = n - 1;
        bool flag =  0 ;
        while(l < r ){
            if(arr[l] + arr[r] == sum){
                cout << l << " " << r << endl ;
                flag = 1 ;
                break ;
            }else if(arr[l] + arr[r] > sum ){
                r-- ;
            }else if ( arr[l] + arr[r] <  sum){
                l++ ;
            }
        }
        if(!flag){
            cout << "no answer" << endl ;
        }
    }
}