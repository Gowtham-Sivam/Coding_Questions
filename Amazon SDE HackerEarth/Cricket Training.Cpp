#include<bits/stdc++.h>
using namespace std;
int solve(int arn[], int arm[], int n, int m )
{
    int val = 0;
    int count = 0 ;

    sort(arn, arn + n);
    sort(arm, arm + m);
    int i , j ;
    for( i = 0 ; i < n ;i++)
    {
        for(j = val  ; j < m ;j++){

            if ( arm[j] <= arn[i] && arm[j] > 0  ){
                arm[j] = 0 ;
                val = j ;
                if(arm[j] == 0) count++ ;
                break;
            }
        }
    }
    return count ;
}


int main(){

    int t ;
    cin >> t ;
    while(t--){

        int n, m ;

        cin >> n ; cin >> m ;
        int i = 0 ;
        int arn[n];
        int arm[m];
        for( i = 0 ; i < n ; i++)
        {
            cin>>arn[i] ;
        }
        for(i = 0  ; i < m ; i++) {
            cin >> arm[i];
        }

        cout <<  solve(arn,arm,n,m)<< endl  ;

    }
}