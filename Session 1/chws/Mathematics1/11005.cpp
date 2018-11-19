//11005 진법 변환 2
#include <iostream>
#include <string>
using namespace std;
int main(){

    int n, b;
    cin >> n >> b;

    string result = "";

    int div;
    div = n;
    while(div > 0){
        int d = div%b;
        if(d < 10){
            result += (char) (d + '0');
        } else{
            result += (char) (d-10 + 'A');
        }
        div /= b;
    }

    


    
    for(int i=result.size()-1; i>=0; i--){
        cout << result[i];
    }
    cout << '\n';
}