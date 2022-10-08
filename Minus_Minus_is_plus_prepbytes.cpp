#include<iostream>
using namespace std ;

void copy(string *s){
    
}
int main(){
    int t ;
    cin >> t ;
    while(t--){
        string  s,t ;
        cin >> s ; cin >> t ;
        int i = 0 ,j = 0 ;
        bool flag = 0 ;
        int max_len = max(s.size(), t.size()) ;
        while(i < max_len){
            if (s[i] == t[i]){
                i++ ;
            }else{
                if ((s[i] == s[i+1]) && (s[i] =='-')){
                    s[i] = '+' ;
                    copy(&s);
                }
            }
        }
    }
    return  0;
}