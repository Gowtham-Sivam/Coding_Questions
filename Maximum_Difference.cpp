#include<bits/stdc++.h>

using namespace std;


void max_diff(int arr[], int n) {
    int a[n], b[n], tmp;

    // Calculating first_array and second_array
    for (int i = 0; i < n; i++) {
        a[i] = (arr[i] + i);
        b[i] = (arr[i] - i);
    }

    int x = a[0], y = a[0];

    // Finding maximum and minimum value in
    // first_array
    for (int i = 0; i < n; i++) {
        if (a[i] > x)
            x = a[i];

        if (a[i] < y)
            y = a[i];
    }

    // Storing the difference between maximum and
    // minimum value in first_array
    int ans1 = (x - y);

    x = b[0];
    y = b[0];

    // Finding maximum and minimum value in
    // second_array
    for (int i = 0; i < n; i++) {
        if (b[i] > x)
            x = b[i];

        if (b[i] < y)
            y = b[i];
    }

    // Storing the difference between maximum and
    // minimum value in second_array
    int ans2 = (x - y);

    cout << max(ans1, ans2) << endl;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
        max_diff(arr, n);
    }
    return 0;
}