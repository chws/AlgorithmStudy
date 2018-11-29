//11729 하노이의 탑
#include <iostream>
using namespace std;
int N;

void solve(int n, int x, int y){
    if(n==0) return;
    solve(n-1, x, 6-x-y);
    cout << x << ' ' << y << '\n';
    solve(n-1, 6-x-y, y);

}

int main(){
    cin >> N;
    cout << ((1<<N)-1) << '\n';
    solve(N, 1, 3);
    
    return 0;

}