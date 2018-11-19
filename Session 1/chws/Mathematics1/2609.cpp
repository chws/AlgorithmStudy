//2609 GCD와 LCM
//유클리드 호제법
#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    else{
        return gcd(b, a%b);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    int g = gcd(n, m);
    int l = n*m/g;
    cout << g << '\n' << l << '\n';

    return 0;

}