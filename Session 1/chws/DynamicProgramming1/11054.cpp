//11054
#include <iostream>
#include <algorithm>
using namespace std;
int A[1001];
int D[1001];
int D2[1001];
int main(){
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    for(int i=0; i<N; i++){
        D[i] = 1;
        for(int j=0; j<i; j++){
            if(A[i] > A[j] && D[i] < D[j] + 1){
                D[i] = D[j] + 1;
            }
        }
    }

    for(int i=N-1; i>=0; i--){
        D2[i] = 1;
        for(int j=i+1; j<N; j++){
            if(A[i] > A[j] && D2[i] < D2[j] + 1){
                D2[i] = D2[j] + 1;
            }
        }
    }

    int result = 0;
    for(int i=0; i<N; i++){
        result = max(result, D[i]+D2[i]-1);
    }

    cout << result << '\n';
    return 0;

}