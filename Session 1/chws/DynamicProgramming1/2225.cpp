//2225
#include <iostream>
using namespace std;
long long mod = 1000000000;
long long d[201][201];
int main(){
    int n, k;
    cin >> n >> k;

    for(int i=0; i<=n; i++){
        d[i][1] = 1;
    }

    for(int i=0; i<=n; i++){
        for(int p=2; p<=k; p++){
            for(int j=0; j<=i; j++){
                d[i][p] += d[i-j][p-1];
            }
            d[i][p] %= mod;
        }
    }

    cout << d[n][k] << '\n';
    return 0;
}