//2873 롤러코스터
#include <iostream>
#include <string>
using namespace std;
int roller[1001][1001];
void func(string &s, char c, int cnt){
    for(int i=0; i<cnt; i++){
        s += c;
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> roller[i][j];
        }
    }

    string s = "";
    if(n%2 == 1){
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                func(s, 'R', m-1);
                if(i!=n-1){
                    func(s, 'D', 1);
                }
            }else{
                func(s, 'L', m-1);
                func(s, 'D', 1);
            }
        }
    }else if(m%2 == 1){
        for(int i=0; i<m; i++){
            if(i%2 == 0){
                func(s, 'D', n-1);
                if(i!=m-1){
                    func(s, 'R', 1);
                }
            }else{
                func(s, 'U', n-1);
                func(s, 'R', 1);
            }
        }
    }else{
        
    }




}