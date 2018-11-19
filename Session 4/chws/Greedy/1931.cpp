//1931
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
    if(a.second==b.second){
        return a.first < b.first;
    }else{
        return a.second < b.second;
    }
}

int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> Mtng(N);

    for(int i=0; i<N; i++){
        cin >> Mtng[i].first >> Mtng[i].second;
    }

    sort(Mtng.begin(), Mtng.end(), cmp);

    int lastE = Mtng[0].second;
    int cnt = 1;
    for(int i=1; i<N; i++){
        if(Mtng[i].first >= lastE){
            lastE = Mtng[i].second;
            cnt ++;
        }
    }

    cout << cnt << '\n';
    return 0;
    
}