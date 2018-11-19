//6588
#include <iostream>
using namespace std;
const int MAX = 1000000;
int prime[MAX];
int pn;
bool check[MAX+1];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=2; i<MAX; i++){
        if(!check[i]){
            prime[pn++] = i;
            for(int j=i*2; j<=MAX; j += i){
                check[j] = true;
            }
        }
    }

    while(true){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }

        for(int i=1; i<pn; i++){
            if(!check[n - prime[i]]){
                cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
                break;
            }
        }
    }

}