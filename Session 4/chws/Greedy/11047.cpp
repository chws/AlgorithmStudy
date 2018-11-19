//11047
#include <iostream>
using namespace std;
int main(){

    int N, K;
    cin >> N >> K;

    int coin[N+1];

    for(int i=0; i<N; i++){
        cin >> coin[i];
    }
    int sum = 0;
    for(int i=N-1; i>=0; i--){
        sum += K/coin[i];
        K %= coin[i];
    }

    cout << sum << '\n';
    return 0;
}