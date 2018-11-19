//9461
#include <iostream>
using namespace std;
long long p[101] = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9};
int main(){
    int t;
    cin >> t;

    for(int i=11; i<=100; i++){
        p[i] = p[i-1] + p[i-5];
    }

    while(t--){
        int n;
        cin >> n;
        cout << p[n] << '\n';
    }

    return 0;


}