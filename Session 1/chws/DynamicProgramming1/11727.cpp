//11727 2xn 타일링 2
#include <iostream>
using namespace std;

int d[1001];

int main(){
    int n;
    cin >> n;
    d[0] = 1;
    d[1] = 1;
    d[2] = 3;
    for(int i=3; i<=n; i++){
        d[i] = d[i-1] + 2*d[i-2];
        d[i] = d[i] % 10007;
    }
    cout << d[n] << '\n';
    return 0;

}