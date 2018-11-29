//10815 숫자카드
#include <iostream>
#include <algorithm>
using namespace std;
int N, M;
int card[500001];
int binary_search(int num){
    int l = 0;
    int r = N-1;

    while(l<=r){
        int mid = (l+r)/2;
        if(card[mid] == num) return 1;
        else if(num < card[mid]){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    return 0;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> card[i];
    }
    sort(card, card+N);

    
    cin >> M;
    int input;
    while(M--){
        cin >> input;
        cout << binary_search(input) << ' ';
    }
    cout << '\n';
    return 0;

}

