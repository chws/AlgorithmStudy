//1780 종이의 개수
#include <iostream>
using namespace std;
int paper[3000][3000];
int ans[3];
int N;
bool isSame(int x, int y, int n){
    bool result = true;
    for(int i=x; i<x+n; i++){
        for(int j=y; j<y+n; j++){
            if(paper[i][j]!=paper[x][y]){
                result = false;
                break;
            }
        }
    }
    return result;
}

void Count(int x, int y, int n){
    if(isSame(x, y, n)){
        ans[paper[x][y]+1] += 1;
        return;
    }
    int m = n/3;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            Count(x+i*m, y+j*m, m);
        }
    }
}

int main(){
    
    cin >> N;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> paper[i][j];
        }
    }
    
    Count(0, 0, N);

    for(int i=0; i<3; i++){
        cout << ans[i] << '\n';
    }

    
    return 0;

}