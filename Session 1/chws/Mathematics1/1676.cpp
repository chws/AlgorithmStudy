//1676
#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int ans = 0;
    for(int i=5; i<=N; i *= 5){
        ans += N/i;
    }
    cout << ans << '\n';
    return 0;
}