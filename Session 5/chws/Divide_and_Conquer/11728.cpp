//11728 배열 합치기
#include <iostream>
using namespace std;
int a[1000001];
int b[1000001];
int c[1000001];
int main(){
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    int i, j, k;
    i=0; j=0; k=0; 

    while(i<n && j<m){
        if(a[i] <= b[j]){
            c[k++] = a[i++];
        }else{
            c[k++] = b[j++];
        }
    }

    while(i<n){
        c[k++] = a[i++];
    }
    while(j<m){
        c[k++] = b[j++];
    }

    for(int p=0; p<n+m; p++){
        cout << c[p] << ' ';
    }

    cout << '\n';

    return 0;


}