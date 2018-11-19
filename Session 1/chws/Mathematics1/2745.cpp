//2745 진법 변환
#include <iostream>
#include <string>
using namespace std;
int main(){
    string n;
    int b;
    cin >> n >> b;
    int sum = 0;
    for(int i=0; i<n.size(); i++){
        if(n[i]-'0'>=0 && n[i]-'0'<=9){
            sum = sum*b + (n[i]-'0');
        }else if(n[i]>='A' && n[i]<='Z'){
            sum = sum*b + (n[i]-'A'+10);
        }
    }

    cout << sum << '\n';

    
    
}