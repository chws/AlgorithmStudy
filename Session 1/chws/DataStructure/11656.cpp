//11656 접미사 배열
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    string str;
    cin >> str;
    vector<string> words;
    int size = str.size();
    for(int i=0; i<size; i++){
        words.push_back(str.substr(i));
    }

    sort(words.begin(), words.end());

    for(int i=0; i<size; i++){
        cout << words[i] << '\n';
    }

    return 0;

}