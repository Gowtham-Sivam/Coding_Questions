#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--){

        string s,t;
        cin>>s>>t;

        int diff = 0;
        bool flag = false;

        if((s.length()==0 && t.length()==0) || (s.length() < t.length()))
            flag = false;
        else{
            for(int i=0; (i-diff)<t.length(); i++){
                if(t[i-diff] == '+' && s[i] == '-' && s[i+1] == '-'){
                    i++;
                    diff++;

                }else if((t[i-diff] == '+' && s[i] == '+') || (t[i-diff] == '-' && s[i] == '-') ){
                    flag = false;
                }
                else{
                    flag = true;
                    break;
                }
            }
        }

        if((s.length()-diff) != t.length()){
            flag = true;
        }

        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
}