//1080 행렬
#include <iostream>
#include <string>
using namespace std;
int A[51][51];
int B[51][51];

void flip(int x, int y){
    for(int i=x-1; i<=x+1; i++){
        for(int j=y-1; j<=y+1; j++){
            A[i][j] = 1-A[i][j];
        }
    }

}

int main(){
    int N, M;
    cin >> N >> M;

    string str;
    for(int i=0; i<N; i++){
        cin >> str;
        for(int j=0; j<M; j++){
            A[i][j] = str[j]-'0';
        }
    }

    for(int i=0; i<N; i++){
        cin >> str;
        for(int j=0; j<M; j++){
            B[i][j] = str[j]-'0';
        }
    }

    int ans = 0;
    for(int i=0; i<N-2; i++){
        for(int j=0; j<M-2; j++){
            if(A[i][j] != B[i][j]){
                ans ++;
                flip(i+1, j+1);
            }
        }
    }



    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(A[i][j] != B[i][j]){
                cout << -1 << '\n';
                return 0;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
