#include<bits/stdc++.h>
#include<map>

using namespace std;

void friends(int arr[], int n) {
    int i = 0, j = 0;
    int count = 0;
    map<int, int> mp;


    for (i = 0; i < n; i++) {
        for (j = 0 ; j < n; j++) {

            if ((arr[j] <= 0.5 * arr[i] + 7) || (arr[j] > 100 && arr[i] < 100) || (arr[j] > arr[i])) {
                continue;
            } else if ((mp[i] == j) || (mp[j] == i)) {
                continue;
            } else {
                mp[i] = j;
                mp[j] = i;
//                cout << arr[i] << " " << arr[j] << endl ;
                count++;
            }
        }
    }
    cout << count  << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int i = 0;

    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    friends(arr, n);


    return 0;
}

https://mycode.prepbytes.com/problems/arrays/FRINDSAGE