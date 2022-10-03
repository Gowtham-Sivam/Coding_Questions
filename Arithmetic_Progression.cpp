#include <bits/stdc++.h>
#include<map>

using namespace std;

int main() {
    map<int, vector<int>> element_index_map;
    int n;
    cin >> n;
    int i, val;
    for (i = 0; i < n; i++) {
        cin >> val;
        element_index_map[val].push_back(i);
    }
    int vec_ele, diff, diff1;
    vector<int> ans;
    for (map<int, vector<int>>::iterator it = element_index_map.begin(); it != element_index_map.end(); ++it) {
        if (it->second.size() == 1) {
            ans.push_back((*it).first);
            ans.push_back(0);
        } else if (it->second.size() == 2) {
            ans.push_back((*it).first);
            ans.push_back(abs(it->second[1] - it->second[0]));
        } else if (it->second.size() > 2) {
            bool flag = 0;
            vec_ele = it->second[0];
            diff = abs(it->second[1] - it->second[0]);
            for (i = 1; i < it->second.size(); i++) {
                diff1 = abs(vec_ele - it->second[i]);
                if (diff == diff1) {
                    flag = 1;
                } else {
                    flag = 0;
                    break;
                }
                vec_ele = it->second[i];
            }
            if (flag) {
                ans.push_back((*it).first);
                ans.push_back(diff);
            }
        }

    }
    cout << ans.size() / 2  << endl ;
    auto it = ans.begin();
    while(it != ans.end()){
        cout << (*it) << " " ;
        it++ ;
        cout << (*it) << endl ;
        it++ ;
    }

    return 0;
}