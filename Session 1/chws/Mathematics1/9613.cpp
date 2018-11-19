//9613 GCD 합
#include <iostream>
using namespace std;
int input[101];

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main(){
    int t;
    cin >> t;
    int n;
    long long sum; // 자료형 주의하기! 1,000,000 * 100 이 최대니까
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> input[i];
        }

        sum = 0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                sum += gcd(input[i], input[j]);
            }
        }
        
        cout << sum << '\n';

    }
    return 0;


}