//1978
#include <iostream>
#include <vector>
using namespace std;
int arr[101];

bool prime(int n){
    if(n < 2)
        return false;
    
    for(int i=2; i*i<=n; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){

    int N;
    cin >> N;

    
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    int cnt = 0;
    for(int i=0; i<N; i++){
        if(prime(arr[i])){
            cnt++;
        }
    }

    cout << cnt << '\n';


}