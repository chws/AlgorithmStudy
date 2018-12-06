//1992 쿼드트리
#include <cstdio>
using namespace std;
int a[100][100];
int N;
bool isSame(int x, int y, int n){
    int norm = a[x][y];
    for(int i=x; i<x+n; i++){
        for(int j=y; j<y+n; j++){
            if(a[i][j] != norm){
                return false;
            }
        }
    }
    return true;
}

void compression(int x, int y, int n){
    if(isSame(x, y, n)){
        printf("%d", a[x][y]);
    }else{
        printf("(");
        int m = n/2;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                compression(x+m*i, y+m*j, m);
            }
        }
        printf(")");
    }
}

int main(){
    //always 2의 제곱수
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%1d", &a[i][j]);
        }
    }

    compression(0, 0, N);

    printf("\n");
    return 0;


}