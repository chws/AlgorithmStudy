//2156
#include <iostream>
using namespace std;
int A[10001];
int D[10001];
int main(){

    int N;
    cin >> N;

    for(int i=1; i<=N; i++){
        cin >> A[i];
    }

    D[1] = A[1];
    D[2] = A[1] + A[2];

    for(int i=3; i<=N; i++){
        D[i] = D[i-1];
        if(D[i] < D[i-2] + A[i]){
            D[i] = D[i-2] + A[i];
        }
        if(D[i] < D[i-3] + A[i] + A[i-1]){
            D[i] = D[i-3] + A[i] + A[i-1];
        }
    }

    cout << D[N] << '\n';
    return 0;

    
}