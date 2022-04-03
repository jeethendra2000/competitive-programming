#include<bits/stdc++.h>
using namespace std;


bool isEvenDigitSum(long int n){
    int sm = 0;
    while(n){
        int last = n % 10;
        sm += last;
        n /=10;
    }
    if(sm % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long int n;
        cin >> n;
        bool flag = isEvenDigitSum(n);
        if(flag) while(isEvenDigitSum(++n));
        else while(!isEvenDigitSum(++n));
        cout << n << endl;
    }
}