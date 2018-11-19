//1463 1로 만들기
#include <iostream>
using namespace std;
int arr[1000001];
int go(int n){
    if(n==1) return 0;
    
    if(arr[n]>0) return arr[n];

    arr[n] = go(n-1) + 1;
    int tmp;
    if(n%3==0){
        tmp = go(n/3) + 1;
        if(arr[n] > tmp){
            arr[n] = tmp;
        }
    }

    if(n%2==0){
        tmp = go(n/2) + 1;
        if(arr[n] > tmp){
            arr[n] = tmp;
        }
    }
    return arr[n];
}


int main(){
    int n;
    cin >> n;
    cout << go(n) << '\n';
    return 0;
}