#include<bits/stdc++.h>
#include<map>

using namespace std;

void friends(int arr[], int n) {
    int i = 0, j = 0;
    int count = 0;
    map<int, vector<int>> mp;


    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {

            if ((arr[j] <= 0.5 * arr[i] + 7) || (arr[j] > 100 && arr[i] < 100) || (arr[j] > arr[i])) {
                continue ;
            } else if ((find(mp[arr[i]].begin(), mp[arr[i]].end(), arr[j]) != mp[arr[i]].end()) ||
                       (find(mp[arr[j]].begin(), mp[arr[j]].end(), arr[i]) != mp[arr[j]].end())) {
                continue;
            } else {
                mp[arr[i]].push_back(arr[j]);
                mp[arr[j]].push_back(arr[i]);
                cout << arr[i] << " " << arr[j] << endl ;
                count++;
            }
        }
    }
    cout << count << endl;
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

