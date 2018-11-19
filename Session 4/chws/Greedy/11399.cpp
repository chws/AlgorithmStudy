//11399
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;

    vector<int> V(N);
    vector<int> result(N);
    for(int i=0; i<N; i++){
        cin >> V[i];
    }
    
    sort(V.begin(), V.end());
    
    result[0] = V[0];
    for(int i=1; i<N; i++){
        result[i] = V[i] + result[i-1];
    }

    long sum = 0;
    for(int i=0; i<N; i++){
        sum += result[i];
    }
    cout << sum << '\n';
    return 0;

}