//1992 쿼드트리
#include <iostream>
using namespace std;
int a[100][100];
int N;
bool isSame(int xs, int xe, int ys, int ye){
    bool res = true;
    int norm = a[xs][ys];
    for(int i=xs; i<xe; i++){
        for(int j=ys; j<ye; j++){
            if(a[i][j] != norm){
                res = false;
                return res;
            }
        }
    }
    return res;
}

void compression(int xs, int xe, int ys, int ye){
    cout << '(';
    
    
    if(isSame(xs, xe, ys, ye)){
        if(a[xs][xe]==1) cout << '1';
        else cout << '0';
    }else if(xs>=0 && xe<=N-1 && ys>=0 && ye<=N-1){
        compression(xs, xe/2, ys, ye/2);
        compression(xe/2+1, xe, ys, ye/2);
        compression(xs, xe/2, ye/2+1, ye);
        compression(xs/2+1, xe, ye/2+1, ye);
    }

    cout << ')';
}

int main(){
    //always 2의 제곱수
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> a[i][j];
        }
    }

    compression(0, N-1, 0, N-1);
    return 0;


}