//11052 붕어빵 판매하기
#include <iostream>
#include <vector>
using namespace std;
int p[10001];


int main(){
    int n;
    cin >> n;
    vector<int>p(n+1);
    vector<int>d(n+1);
    for(int i=1; i<=n; i++){
        cin >> p[i];
    } 


    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            d[i] = max(d[i], p[j]+d[i-j]);
        }
    }    
    cout << d[n] << '\n';
}