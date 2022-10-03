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

    cout << element_index_map.size() << endl ;
    for (map<int, vector<int>>::iterator it = element_index_map.begin(); it != element_index_map.end(); ++it) {
        if (it->second.size() == 1)
            cout << (*it).first << " " << "0" << endl;

        else if (it->second.size() == 2)
            cout << (*it).first << " " << it->second[1] - it->second[0] << endl ;

        else if (it->second.size() > 2){
                bool flag = 0;
                vec_ele = it->second[0];
                diff = abs(it->second[1] - it->second[0]);
                for (i =  1 ; i < it -> second.size() ; i++) {
                   diff1 = abs (vec_ele - it->second[i] )  ;
                   if (diff == diff1){
                       flag = 1 ;
                   }else{
                       flag = 0 ;
                   }
                   vec_ele = it->second[i] ;
                }
                if (flag){
                    cout << (*it).first << " " << diff1 << endl  ;
                 }
            }


    }

    return 0;
}