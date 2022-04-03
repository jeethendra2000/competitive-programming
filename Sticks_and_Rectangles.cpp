#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       map<int,int> mp;
       for(int i = 0; i < n; i++){
           int temp;
           cin >> temp;
           mp[temp]++;
       }
       int sm = 0, p = 0;
       for(auto it : mp){
           sm += (it.second % 2);
           p += (it.second + 1) / 2;
       }
       cout << (p % 2 == 0 ? sm : sm+2) << endl;
    }
}