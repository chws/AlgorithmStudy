//11576
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int N;
    cin >> N;

    vector<int> arr(N+1);
    vector<int> result;

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }


    long long sum = arr[0];
    for(int i=0; i<N-1; i++){
        sum = sum*A + arr[i+1];
    }

    //cout << sum << '\n';


    while(sum >= B){
        result.push_back(sum%B);
        sum /= B;
    }
    result.push_back(sum);

    for(int i=result.size()-1; i>=0; i--){
        cout << result[i] << ' ';
    }
    cout << '\n';
    return 0;



}