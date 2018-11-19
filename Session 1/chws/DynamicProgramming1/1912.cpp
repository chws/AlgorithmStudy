//1912
#include <iostream>
#include <algorithm>
using namespace std;
int a[100001];
int d[100001];
int main(){
    int n; 
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    d[0] = a[0];
    for(int i=1; i<n; i++){
        d[i] = max(d[i-1]+a[i], a[i]);
    }

    sort(d, d+n);
    cout << d[n-1] << '\n';
    return 0;
}