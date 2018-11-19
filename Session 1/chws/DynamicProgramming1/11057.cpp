//11057 오르막 수
#include <iostream>
using namespace std;
long long d[1001][10];
long long mod = 10007;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<=9; i++){//수는 0으로 시작할 수 있어서 i=0부터 시작
        d[1][i] = 1;
    }

    for(int i=2; i<=n; i++){
        for(int j=0; j<=9; j++){
            for(int k=0; k<=j; k++){
                d[i][j] += d[i-1][k];
                d[i][j] %= mod;
            }
        }
    }

    long long result = 0;

    for(int i=0; i<=9; i++){
        result += d[n][i];
    }

    cout << result%10007 << '\n';



}