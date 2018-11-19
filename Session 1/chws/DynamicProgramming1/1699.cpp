//1699
#include <iostream>
#include <algorithm>
using namespace std;
int d[100001];
int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        d[i] = i;
        for(int j=1; j*j<=i; j++){
            d[i] = min(d[i-j*j]+1, d[i]);
        }
    }

    cout << d[n] << '\n';
    return 0;
}