//11053
#include <iostream>
#include <algorithm>
using namespace std;
int A[1001];
int D[1001];
int main(){

    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    
    for(int i=0; i<N; i++){
        D[i] = 1;
        for(int j=0; j<i; j++){
            if(A[j] < A[i] && D[i] < D[j]+1){
                D[i] = D[j] + 1;
            }
        }
    }

    int result = 0;
    for(int i=0; i<N; i++){
        result = max(result, D[i]);
    }
    cout << result << '\n';
    return 0;


}