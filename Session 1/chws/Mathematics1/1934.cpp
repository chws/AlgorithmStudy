//1934 LCM
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
    int n, m, g, l;
    int t;
    cin >> t;

    while(t--){
        cin >> n >> m;
        g = gcd(n, m);
        l = n*m/g;
        cout << l << '\n';

    }

    return 0;

}