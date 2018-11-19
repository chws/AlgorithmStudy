//10816 숫자 카드2
#include <iostream>
#include <algorithm>
using namespace std;
int card[500001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> card[i];
    }

    sort(card, card+n);

    int m;
    cin >> m;
    while(m--){
        int x;
        cin >> x;
        auto a = upper_bound(card, card+n, x);
        auto b = lower_bound(card, card+n, x);
        cout << a-b << ' ';

    }
    cout << '\n';
    
    return 0;
    
}