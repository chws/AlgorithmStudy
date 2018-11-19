//1744 수 묶기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> pos;
    vector<int> neg;
    int one = 0;
    int zero = 0;
    
    for(int i=0; i<N; i++){
        int x;
        cin >> x;
        if(x==1){
            one++;
        }else if(x>0){
            pos.push_back(x);
        }else if(x<0){
            neg.push_back(x);
        }else{
            zero++;
        }
    }

    sort(pos.begin(), pos.end());
    reverse(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    if(pos.size()%2==1){
        pos.push_back(1);
    }
    if(neg.size()%2==1){
        if(zero!=0){
            neg.push_back(0);
            zero--;
        }else{
            neg.push_back(1);
        }
    }

    int ans = one;
    for(int i=0; i<pos.size(); i+=2){
        ans += pos[i]*pos[i+1];
    }
    for(int i=0; i<neg.size(); i+=2){
        ans += neg[i]*neg[i+1];
    }
    cout << ans << '\n';
    return 0;
    
}