#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = 0;
        for(auto it:s){
            if(it == '5' || it == '0'){
                flag = 1;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
    }
}