//1541
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s;
    cin >> s;
    int size = s.size();
    vector<int> num;
    
    bool minus = false;
    int start = 0;
    int end = 0;
    int sum = 0;

    for(int i=1; i<=size; i++){
        int v = s[i];
        if(v == '+' || v == '-' || i == size){
            end = i;
            int k = stoi(s.substr(start, end-start));
            start = i+1;

            if(minus){
                sum -= k;
            }else{
                sum += k;
            }

            if(v == '-'){
                minus = true;
            }

        }   
    }


    cout << sum << '\n';
    return 0;
    
}