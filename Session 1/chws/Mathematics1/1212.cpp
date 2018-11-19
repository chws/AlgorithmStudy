//1212
#include <iostream>
#include <string>
using namespace std;
void change(int n, int i){
    int result[3] = {0, 0, 0};
    int j=2;
    while(n>0){
        int a = n%2;
        n = n/2;
        result[j--] = a;
    }

    
    if(!i){
        if(result[0] == 0){
            if(result[1] == 0){
                cout << result[2];
            }else if(result[1] == 1){
                cout << result[1] << result[2];
            }
        }
        else{
            for(int k=0; k<3; k++){
            cout << result[k];
              }
        }
    }else{
        for(int k=0; k<3; k++){
        cout << result[k];
        }
    }
    
    
    
}
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        int v = s[i]-'0';
        
        change(v, i);
    }
    cout << '\n';
}