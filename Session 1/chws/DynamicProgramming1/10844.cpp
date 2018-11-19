//10844 쉬운 계단 수
#include <iostream>
using namespace std;
long long a[101][10];
long long mod = 1000000000;
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=9; i++){
        a[1][i] = 1;
    }

    for(int i=2; i<=n; i++){
        for(int j=0; j<=9; j++){
            
            if(j-1>=0){
                a[i][j] += a[i-1][j-1];
            }
            if(j+1<=9){
                a[i][j] += a[i-1][j+1];
            }
            a[i][j] %= mod;
        }
        
    }

    long long result = 0;
    for(int i=0; i<=9; i++){
        result += a[n][i];
    }

    cout << result % mod << '\n';



    return 0;
}//10844 쉬운 계단 수
#include <iostream>
using namespace std;
long long a[101][10];
long long mod = 1000000000;
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=9; i++){
        a[1][i] = 1;
    }

    for(int i=2; i<=n; i++){
        for(int j=0; j<=9; j++){
            
            if(j-1>=0){
                a[i][j] += a[i-1][j-1];
            }
            if(j+1<=9){
                a[i][j] += a[i-1][j+1];
            }
            a[i][j] %= mod;
        }
        
    }

    long long result = 0;
    for(int i=0; i<=9; i++){
        result += a[n][i];
    }

    cout << result % mod << '\n';



    return 0;
}