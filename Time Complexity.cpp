#include<iostream>
using namespace  std ;


int main(){
    int t ;
    cin >> t ;
    while(t--){
        int x , y;
        cin >> x ; cin >> y ;
        ( x > y )? cout << "Yes" << endl : cout << "No" << endl ;
    }
    return 0 ;
}