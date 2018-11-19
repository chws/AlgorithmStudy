//10872
#include <iostream>
using namespace std;
int fact[13];
int factorial(int n){
    if(n==1 || n==0) return 1;
    else{
        if(fact[n]!=0){
            return fact[n];
        }else{
            return fact[n] = n * factorial(n-1);
        }
        
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    cout << factorial(N) << '\n';
    return 0;
}