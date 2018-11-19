//2875
#include <iostream>
using namespace std;
int main(){
    int N, M, K;
    cin >> N >> M >> K;
    
    int ans = 0;
    while(M>=1 && N>=2 && M+N>=K+3){
        ans ++;
        N -= 2;
        M --;
    }

    cout << ans << '\n';
    return 0;


}
