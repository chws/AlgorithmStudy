//10610
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cin >> str;

    int sum = 0;
    for(char c : str){
        sum += c-'0';
    }
    sort(str.begin(), str.end());

    if(str[0] == '0' && sum%3==0){
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }else{
        cout << -1 << '\n';
    }
    return 0;
}